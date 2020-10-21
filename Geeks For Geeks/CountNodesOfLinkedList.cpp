// Link to the problem : https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/
// Problem Name : Count nodes of linked list
// Time Complexity : O(N)
// Technique : Traversal in a Linked List

int getCount(struct Node* head){

    //Code here
    struct Node* p;
    p = head;
    int c = 0;
    while(p != NULL) {
        c++;
        p = p-> next;
    }
    return c;

}
