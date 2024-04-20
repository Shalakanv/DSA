#include<iostream>
using namespace std;

/*
Node* removeDuplicates(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    Node* curr = head;
    while (curr != nullptr && curr->next != nullptr) {
        Node* compare = curr;
        while (compare->next != nullptr) {
            if (curr->data == compare->next->data) {
                Node* duplicate = compare->next;
                compare->next = compare->next->next;
                delete duplicate;
            } else {
                compare = compare->next;
            }
        }
        curr = curr->next;
    }
    return head;
}
*/
