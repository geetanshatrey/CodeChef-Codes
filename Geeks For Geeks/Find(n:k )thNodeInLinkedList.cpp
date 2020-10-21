// Link to the problem : https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1/
// Problem Name : Find n/k th node in Linked list
// Time Complexity : O(N)
// Technique : Linked List Traversal

int fractional_node(struct Node *head, int k)
{
    // your code here
    long N = 0;
    struct Node* ptr;
    ptr = head;
    while(ptr != NULL) {
        ptr = ptr -> next;
        N++;
    }
    float index = ceil((float) N / (float) k);
    ptr = head;
    while(ptr != NULL && index > 1) {
        ptr = ptr -> next;
        index--;
    }
    return ptr->data;
}
