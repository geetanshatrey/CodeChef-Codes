// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3589/
// Problem Name : Check Array Formation Through Concatenation

class Solution {
    int ans = 0;
    
    void swapVal(int arr[], int i, int j) {
        if(i == j) {
            return;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    void dfs(int arr[], int N, int index) {
        if(index == N) {
            ans++;
            return;
        }
        for(int i = index; i < N; i++) {
            if(arr[i] % index == 0 || index % arr[i] == 0) {
                swapVal(arr, index, i);
                dfs(arr, N, index + 1);
                swapVal(arr, i, index);
            }
        }
    }
    
public:
    int countArrangement(int n) {
        int arr[n+1];
        for(int i = 1; i <= n; i++) {
            arr[i] = i;
        }
        dfs(arr, n+1, 1);
        return ans;
    }
};
