// Link to the problem : https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1/
// Problem Name : Implement stack using array 
// Time Complexity : O(1)
// Technique : Stack using Array

/* The method push to push element into the stack */
void MyStack :: push(int x)
{
        // Your Code
    top++;
    arr[top] = x;
}

/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
        // Your Code  
    if(top == -1) {
        return -1;
    }
    int x = arr[top];
    top--;
    return x;
}