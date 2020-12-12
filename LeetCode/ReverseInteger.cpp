// Link to the problem : https://leetcode.com/problems/reverse-integer/
// Problem Name : Reverse Integer

class Solution {
public:
    int reverse(int x) {
        long long int y = 0;
        long long int z = abs(x);
        long long int temp = z;
        int c = -1;
        while(temp > 0) {
            c++;
            temp = temp / 10;
        }
        while(z != 0) {
            int k = z % 10;
            y += pow(10,c) * k;
            z = z / 10;
            c--;
        }
        if(x < 0) {
            y = -y;
        }
        if(y > INT_MAX || y < INT_MIN) {
            return 0;
        }
        else {
            return y;
        }
        
        
    }
};
