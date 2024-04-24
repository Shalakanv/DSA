/*
// First Approach
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* random;

    Node(int x)
    {
        data = x;
        next = NULL;
        random = NULL;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d)
{
    Node* newNode = new Node(d);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}

Node* copyList(Node* head)
{
    // step 1: Create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;

    while(temp != NULL)
    {
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp = temp -> next;
    }

    // step 2: Create a map 
    unordered_map<Node*,Node*>oldToNewNode;

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL)
    {
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL)
    {
        cloneNode -> random = oldToNewNode[originalNode -> random];
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }
    return cloneHead;
}


// Second approach

void insertAtTail(Node* &head,Node* &tail,int d)
{
    Node* newNode = new Node(d);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}


Node* copyList(Node* head)
{
    // step1 : create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;

    while(temp != NULL)
    {
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp = temp -> next;
    }

    // step2 :  add cloneNodes in between original list
    Node* originalNode = head;
    Node* cloneNode = cloneNode;

    while(originalNode != NULL && cloneNode != NUll)
    {
        Node* next = originalNode -> next;
        originalNode -> next = cloneNode;
        originalNode = next;

        next = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode = next;
    }

    // step3: copy random pointer
    temp = head;

    while(temp != NULL)
    {
        if(temp != NULL)
        {
            if(temp -> random != NULL)
            {
                temp ->next -> random = temp -> random -> next;
            }
            else{
                temp -> next = temp -> random;
            }
            temp = temp -> next -> next;
        }
    }

    // step4: reverse step 2
    originalNode = head;
    cloneNode = cloneNode;

    while(originalNode != NULL && cloneNode != NULL)
    {
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next ;

        if(originalNode != NULl)
        {
            cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode -> next;
    }

    // step5: return ans
    return cloneHead;
}
















*/