// Link to the problem : https://practice.geeksforgeeks.org/problems/modular-node/1/
// Problem Name : Modular Node
// Time Complexity : O(N)
// Technique : Traversal in a Linked List

int modularNode(Node* head, int k)
{
	// Code here
	Node *ptr = head;
	int i = 1, max_data = -1;
	while(ptr != NULL) {
	    if(i % k == 0) {
	        max_data = ptr->data;
	    }
	    ptr = ptr -> next;
	    i++;
	}
	return max_data;
}
