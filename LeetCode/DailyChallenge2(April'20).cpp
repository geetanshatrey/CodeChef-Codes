//Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3284/

class Solution {
public:
    bool isHappy(int n) {
        int c=0,x=n;
        if(n==1){
            return true; 
        }
        else{
            unordered_set <int> visited; 
            visited.insert(n);
            while(true){
                if(c==1){
                    return true;
                }
                c=0;
                while(x>0){
                    int temp= x % 10;
                    c = c + temp*temp; 
                    x=x/10;
                }
                if(visited.count(c)==1){
                    return false;
                }
                visited.insert(c);
                x=c;
            }     
        }
    }
};
