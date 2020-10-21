// Link to the problem : https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/
// Problem Name : Insert in Middle of Linked List 
// Time Complexity : O(log N)
// Technique : Two pointer traversal

Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
    Node *p, *q;
    p = head;
    q = p;
    while(q != NULL && q->next != NULL && q->next->next != NULL) {
        p = p->next;
        q = q->next->next; 
    }
    Node * ptr;
    ptr = new Node(x);
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
