#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

// Traverse a linkedlist
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// calculate length of linkedlist
int getLen(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at head
void insertAtHead(Node *&head, int d)
{
    // If initially we dont have any node then we will handle this case separately(same for tail also)
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        // If we want we can pass tail as a parameter to the function and point it to the node as well
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at Tail
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insert at any position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// delete node at any position
void deleteNode(int position, Node *&head)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *cur = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }

        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout << "Length of linkedlist is:" << getLen(head) << endl;

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 16);
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 22);
    print(head);

    cout << "Length of linkedlist is:" << getLen(head) << endl;

    insertAtTail(tail, 24);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    deleteNode(6, head);
    print(head);
}