// Link to the problem : https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1/
// Problem Name : Linked List Length Even or Odd?
// Time Complexity : O(N)
// Technique : Traversal in a Linked List

int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
    struct Node* p;
    p = head;
    int c = 0;
    while(p != NULL) {
        c++;
        p = p-> next;
    }
    if(c % 2 == 0) {
        return 0;
    }
    else {
        return 1;
    }
}
