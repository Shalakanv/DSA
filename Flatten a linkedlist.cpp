/*
Node* merge(Node* a, Node* b) {
    if (a == NULL) return b;
    if (b== NULL) return a;
    
    Node* result;
    if (a->data < b->data) {
        result = a;
        result->child = merge(a->child, b);
    } else {
        result = b;
        result->child = merge(a, b->child);
    }
    return result;
}

Node* flattenLinkedList(Node* head) {
    if (head == NULL  || head->next == NULL) // Base case: If head is NULL or only one node is there
        return head;

    // Recursively flatten the rest of the list
    head->next = flattenLinkedList(head->next);

    // Merge the current list with the flattened next list
    head = merge(head, head->next);

    // Return the merged list
    return head;
}

*/

