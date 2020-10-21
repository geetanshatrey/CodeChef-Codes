// Link to the problem : https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1/
// Problem Name : Implement Stack using Linked List
// Time Complexity : O(1)
// Technique : Stack using Linked List

/* The method push to push element
   into the stack */
void MyStack ::push(int x) {
    // Your Code
    struct StackNode* p;
    p = top;
    struct StackNode* q;
    q = new StackNode(x);
    q -> next = p;
    top = q;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    struct StackNode* p;
    p = top;
    if(p == NULL) {
        return -1;
    }
    top = p -> next;
    int x = p -> data;
    delete(p);
    return x;
    
}