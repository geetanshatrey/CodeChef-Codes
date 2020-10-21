// Link to the problem : https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1/
// Problem Name : Node at a given index in linked list
// Time Complexity : O(N)
// Technique : Linked List Traversal

int GetNth(struct node* head, int index){
  // Code here
    struct node* ptr;
    ptr = head;
    while(ptr != NULL && index > 1) {
        ptr = ptr -> next;
        index--;
    }
    return ptr->data;
}
