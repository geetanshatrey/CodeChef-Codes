// Link to the problem : https://leetcode.com/explore/featured/card/september-leetcoding-challenge/554/week-1-september-1st-september-7th/3445/
// Problem Name : Largest Time for Given Digits
// Solution Method : Greedy Method + STL 

class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {    
        sort(A.begin(), A.end());
        string ans = "";
        string temp = "";
        
        do {
            if((A[0]==2 && A[1]<=3 || A[0]<2) && A[2]<=5 && A[3]<=9){
                string temp = to_string(A[0]) + to_string(A[1]) + ':' + to_string(A[2]) + to_string(A[3]);
                
                if(temp > ans) {
                    ans = temp;
                }   
            }
        } while(next_permutation(A.begin(),A.end()));
        return ans;
    }
};

