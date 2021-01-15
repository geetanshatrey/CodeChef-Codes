// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/581/week-3-january-15th-january-21st/3605/
// Problem Name : Get Maximum in Generated Array


class Solution {
public:
    int getMaximumGenerated(int n) {
        int arr[n+1];
        if(n == 0) {
            return 0;
        }
        fill(arr, arr + n + 1, 0); 
        arr[1] = 1;
        int max = 1;
        for(int i = 2; i <= n; i = i * 2) {
            arr[i] = 1;
        }
        if(n % 2 == 0) {
            for(int i = 1; i < n/2; i = i + 1) {
                arr[2 * i + 1] = arr[i] + arr[i + 1];
                if(arr[2 * i + 1] > max) {
                    max = arr[2 * i + 1];
                }
                if((4 * i + 2) <= n && arr[(2*i + 1) * 2] == 0) {
                    arr[(2*i + 1) * 2] = arr[2 * i + 1];
                    if(arr[(2 * i + 1) * 2] > max) {
                        max = arr[(2 * i + 1) * 2];
                    }
                }
            }
        }
        else {
            for(int i = 1; i <= n/2; i = i + 1) {
                arr[2 * i + 1] = arr[i] + arr[i + 1];
                if(arr[2 * i + 1] > max) {
                    max = arr[2 * i + 1];
                }
                if((4 * i + 2) <= n && arr[(2*i + 1) * 2] == 0) {
                    arr[(2*i + 1) * 2] = arr[2 * i + 1];
                    if(arr[(2 * i + 1) * 2] > max) {
                        max = arr[(2 * i + 1) * 2];
                    }
                }
            }
        }
        for(int i = 0; i <= n; i++) {
            if(i % 2 == 0) {
                arr[i] = arr[i/2];
            }
            else {
                arr[i] = arr[i/2] + arr[i/2 + 1];
            }
            if(arr[i] > max) 
                max = arr[i];
        } 
        
        return max;
    }
};
