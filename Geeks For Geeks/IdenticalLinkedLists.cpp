// Link to the problem : https://practice.geeksforgeeks.org/problems/identical-linked-lists/1/
// Problem Name : Identical Linked Lists
// Time Complexity : O(N)
// Technique : Traversal in a Linked List

bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    struct Node *p1, *p2;
    p1 = head1;
    p2 = head2;
    while(p1 != NULL && p2!= NULL) {
        if(p1->data != p2->data) {
            return false;
        }
        p1 = p1 -> next;
        p2 = p2 -> next;
    } 
    if(p1 == NULL && p2 == NULL) {
        return true;
    }
    else {
        return false;
    }
}
