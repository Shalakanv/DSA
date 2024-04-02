#include<iostream>
using namespace std;

// Node creation
class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor 
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

// Insert at head position
void insertAtHead(Node* &head, int d)
{
    // New node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// Insert after tail
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// Insert in between two element
void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
    // Insert at first
    if(position == 1)
    {
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    // Insert at end 
    if(temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position,Node* &head)
{
    //deleting first node
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;
        //memory free 
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting middle node ot last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next; 
    }
    cout<< endl;
}

int main()
{
    // node created
    Node* node1 = new Node(10);
    //cout<< node1 -> data <<endl;
    //cout<< node1 -> next <<endl;

    // node pointed to head
    Node* head = node1;
    Node* tail = node1;
    print(head);
    /*
    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);
    */

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail,head,4,22);
    print(head);

    deleteNode(1,head);
    print(head);

}