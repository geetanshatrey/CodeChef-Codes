// Link to the problem : https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/
// Problem Name : Finding middle element in a linked list
// Time Complexity : O(log N)
// Technique : Two pointer traversal

int getMiddle(Node *head)
{
   // Your code here
   Node *p, *q;
   p = head;
   q = p;
   while(q != NULL && q->next != NULL) {
       p = p->next;
       q = q->next->next; 
   }
   return p->data;
}
