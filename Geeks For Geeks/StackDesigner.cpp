// Link to the problem : https://practice.geeksforgeeks.org/problems/stack-designer/1/
// Problem Name : Stack designer
// Time Complexity : O(N)
// Technique : Stack in STL


stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
    stack<int> res;
    for(int i = 0; i < n; i++) {
        res.push(arr[i]);
    }
    return res;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int>s)
{
    //print top and pop for each element until it becomes empty
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}
