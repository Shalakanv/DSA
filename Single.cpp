#include<iostream>
#include<map>
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

//Approach 1
bool detectLoop(Node* head)
{
    if(head == NULL)
    {
        return false;
    }

    map < Node*,bool >visited;
    Node* temp = head;

    while(temp != NULL)
    {
        // cycle is present
        if(visited[temp] == true){
            cout<<"Loop is present on element "<<temp -> data <<endl;
            return true;
        }
        visited[temp]=true;
        temp = temp -> next;
    }

    return false;
}

// Floyd's cycle detection algorithm
Node* floydDetectionAlgo(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast  = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast)
        {
            cout<<"Loop is present at "<<slow->data<<endl;
           return slow;
        }
    }
    return fast;
}

Node* getStartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* intersection = floydDetectionAlgo(head);
    Node* slow = head;

    while(slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

Node* removeLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop)
    {
        temp = temp -> next;
    }

    temp -> next = NULL;
    return head;
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

    tail -> next = head -> next;

    if(floydDetectionAlgo(head)!= NULL)
    {
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }

    Node* loop = getStartingNode(head);

    cout<<"Loop starts at "<<loop -> data <<endl;

    removeLoop(head);
    print(head);
    

}