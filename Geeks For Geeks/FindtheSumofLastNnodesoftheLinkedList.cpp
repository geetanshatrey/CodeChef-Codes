// Link to the problem : https://practice.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1/
// Problem Name : Find the Sum of Last N nodes of the Linked List
// Time Complexity : O(N)
// Technique : Traversal in a Linked List + Hash Table

int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      int arr[1000] = {0};
      struct Node* p = head;
      int m = 0, i = 0;
      while(p != NULL) {
          if(i == 0) {
              arr[i] = 0 + p->data;
          }
          else {
              arr[i] = arr[i - 1] + p->data;
          }
          i++;
          m++;
          p = p -> next;
      }
      return arr[m-1] - arr[m-n-1];
      
      
}
