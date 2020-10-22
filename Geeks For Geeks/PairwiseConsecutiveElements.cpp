// Link to the problem : https://practice.geeksforgeeks.org/problems/pairwise-consecutive-elements/1/
// Problem Name : Pairwise Consecutive Elements
// Time Complexity : O(log N)
// Technique : Stacks in STL

bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    if(s.size() % 2 != 0) {
        s.pop();
    }
    while(!s.empty()) {
        int x = s.top();
        s.pop();
        int y = s.top();
        s.pop();
        if(x != y + 1 && x != y - 1) {
            return false;
        }
    }
    return true;
}
