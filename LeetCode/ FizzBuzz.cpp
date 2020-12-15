// Link to the problem : https://leetcode.com/problems/fizz-buzz/
// Problem Name : Fizz Buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i = 1; i <= n; i++) {
            if(i == 1) {
                res.push_back("1");
            }
            else {
                if(i % 3 == 0) {
                    if(i % 5 == 0) {
                        res.push_back("FizzBuzz");
                    }
                    else {
                        res.push_back("Fizz");
                    }
                }
                else if(i % 5 == 0) {
                    res.push_back("Buzz");
                }
                else {
                    res.push_back(to_string(i));
                }
            }
        }
        return res;
    }
};
