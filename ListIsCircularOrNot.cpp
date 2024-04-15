#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this ->data;
        if(this ->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d)
{
    //assuming that the element is present in linkedlist

    // empty list
    if(tail==NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        // for non-empty list
        //assuming that the element is present in linkedlist

        Node* curr = tail;

        while(curr ->data !=element){
            curr= curr -> next;
        }

        // element found and curr is representing that element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail;

    if(tail == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    /*
    while(tail -> next != temp)
    {
        cout<< tail -> data <<" "<<endl;
        tail = tail-> next;
    }
    */

   do{
        cout<< tail -> data <<" ";
        tail = tail-> next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value)
{
    // empty list
    if(tail == NULL)
    {
        cout<<"List is empty,please check again"<<endl;
        return;
    }
    else{
        // non-empty
        // assuming that 'value' is present in linkedlist

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        // for single node linkedlist 
        if(curr == prev)
        {
            tail = NULL;
        }

        prev -> next = curr -> next;
        // if we will ot add this step then tail point to that deleted node and if we pass tail to print function it will not print anything so this step is important
        // Tbis case is for node greater than or equal to 2
         if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool isCircular(Node* head)
{
    // empty list
    if(head == NULL)
    {
        return NULL;
    }

    Node* temp = head -> next;

    while(temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if(temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
    Node* tail = NULL;

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,8);
    print(tail);
    /*
    insertNode(tail,8,11);
    print(tail);

    insertNode(tail,11,13);
    print(tail);

    insertNode(tail,13,15);
    print(tail);

    insertNode(tail,15,2);
    print(tail);

    deleteNode(tail,5);
    print(tail);

    */

 if(isCircular(tail))
 {
    cout<<"LinkedList is circular"<<endl;
 }
 else{
    cout<<"It is not"<<endl;
 }


}