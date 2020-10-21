// Link to the problem : https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1/
// Problem Name : Delete Alternate Nodes
// Time Complexity : O(N)
// Technique : Traversal in a Linked List

void deleteAlt(struct Node *head){
    // Code here
    struct Node *p;
    p = head;
    if(p->next == NULL) {
        return;
    }
    while(p != NULL && p-> next != NULL) {
        if(p-> next-> next == NULL) {
            p->next = NULL;
        }
        else {
           p->next = p->next->next; 
        }
        p = p -> next;
    }
}
