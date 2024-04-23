/*
#include<iostream>
using namespace std;

Node* reverse(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(struct Node* &head, struct Node* &tail,int value)
{
    Node* temp = new Node(value);
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }else{
        tail -> next = temp;
        tail = temp;
    }
}

struct Node* add(struct Node* first,struct Node* second)
{
    int carry=0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL && second != NULL)
    {
        int sum = first -> data + second -> data + carry;
        int digit = sum % 10;

        insertTail(ansHead,ansTail,digit);

        carry = sum/10; 
        first = first -> next;
        second = second -> next; 
    }
    while(first != NULL)
    {
        int sum = carry + first -> data;
        int digit = sum % 10;

        insertTail(ansHead,ansTail,digit);

        carry = sum/10; 
        first = first -> next;
    }
    while(second != NULL)
    {
        int sum = carry + second -> data;
        int digit = sum % 10;

        insertTail(ansHead,ansTail,digit);

        carry = sum/10;
        second = second -> next;
    }
    while(carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;

        insertTail(ansHead,ansTail,digit);

        carry = sum/10;
    }
    return ansHead;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first = reverse(first);
    second = reverse(second);

    Node* ans = add(first,second);

    ans = reverse(ans);

    return ans;
}

*/

