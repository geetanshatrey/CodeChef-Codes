// Link to the problem : https://practice.geeksforgeeks.org/problems/queue-designer/1/
// Problem Name : Queue Push & Pop
// Time Complexity : O(N)
// Technique : Stacks in STL

queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> res;
   for(int i = 0; i < n; i++) {
       res.push(arr[i]);
   }
   return res;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty()) {
        cout << s.front() << " ";
        s.pop();
    }
} 
