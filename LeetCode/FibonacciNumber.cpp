// Link to the problem : https://leetcode.com/problems/fibonacci-number/
// Problem Name : Fibonacci Number

class Solution {
    int arr[100] = {1,};
public:
    int fibonacciNumberUsingDP(int n) {
        if(arr[n]!=-1){
            return arr[n];
        }
        if(n==1 ||n==2){
            return arr[n];
        }
        else{
            return arr[n] = fib(n-1) + fib(n-2);
        }
    }
    int fib(int n) {
        fill(arr, arr+100, -1);
        arr[1] = 1;
        arr[2] = 1;
        if(n == 0) {
            return 0;
        }
        return fibonacciNumberUsingDP(n);
    }
};
