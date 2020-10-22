// Link to the problem : https://practice.geeksforgeeks.org/problems/queue-reversal/1/
// Problem Name : Queue Reversal
// Time Complexity : O(N)
// Technique : Stack in STL

queue<long long int> rev(queue<long long int> q)
{
    // add code here.
    stack<long long int> res;
    while(!q.empty()) {
        res.push(q.front());
        q.pop();
    }
    while(!res.empty()) {
        q.push(res.top());
        res.pop();
    }
    return q;
}
