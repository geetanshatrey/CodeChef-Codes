// Link to the problem : https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/
// Problem Name : Linked List Insertion
// Time Complexity : O(N)
// Technique : Linked List Traversal

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   // Your code here
   Node* ptr;
   ptr = new Node(newData);
   if(head == NULL) {
       head = ptr;
       ptr->next = NULL;
       return head;
   }
   ptr->next = head;
   head = ptr;
   return head;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
   Node* ptr, *temp;
   temp = new Node(newData);
   ptr = head;
   if(head == NULL) {
       head = temp;
       temp->next = NULL;
       return head;
   }
   while(ptr ->next != NULL) {
       ptr = ptr->next;
   }
   ptr->next = temp;
   temp->next = NULL;
   return head;
}
