// Link to the problem : https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1/
// Problem Name : Delete node in Doubly Linked List
// Time Complexity : O(N)
// Technique : Traversal in a Linked List

Node* deleteNode(Node **head_ref, int x)
{
  //Your code here
  Node *ptr = *head_ref;
  if(x == 1) {
      Node* temp = ptr;
      *head_ref = ptr->next;
      ptr = ptr->next;
      ptr -> prev = NULL;
      delete(temp);
      return *head_ref;
  }
  while(ptr != NULL && (x-2) > 0) {
      ptr = ptr -> next;
      x--;
  }
  Node *temp = ptr->next;
  ptr->next = ptr->next->next;
  if(ptr->next!= NULL) {
      ptr->next->prev = ptr;
  }
  delete(temp);
  return *head_ref;
}
