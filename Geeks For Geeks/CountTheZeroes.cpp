// Link to the problem : https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1
// Problem Name : Count the zeroes
// Time Complexity : O(log N)
// Technique : Binary Search

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int l = 0, length = 0;
        int r = n-1;
        if(arr[l] == 0) {
            return n;
        }
        while(l < r) {
            int mid = (l + r) / 2;
            if(arr[mid] == 0 && arr[mid - 1] == 1) {
                length = n - mid;
                break;
            }
            else if(arr[mid] == 0){
                r = mid - 1; 
            }
            else if(arr[mid] == 1) {
                l = mid + 1;
            }
        }
        if(l == r) {
            length = n - l;
        }
        return length;
    }
};
