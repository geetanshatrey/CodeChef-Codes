// Link to the problem : https://practice.geeksforgeeks.org/problems/circular-linked-list/1/
// Problem Name : Check If Circular Linked List
// Time Complexity : O(N)
// Technique : Circular Linked List

bool isCircular(Node *head)
{
   // Your code here
   struct Node *p, *q;
   p = head;
   q = head;
   if(p == NULL) {
       return true;
   }
   
   do {
       if(q->next == NULL) {
            return false;    
       }
       q = q->next;
   } while(p != q);
   return true;
}
