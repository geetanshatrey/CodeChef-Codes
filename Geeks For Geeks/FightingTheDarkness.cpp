// Link to the problem : https://practice.geeksforgeeks.org/problems/fighting-the-darkness3949/1/
// Problem Name : Fighting the darkness
// Time Complexity : O(N)
// Technique : Array Traversal

class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here  
        int max = -1;
        for(int i =0; i < n; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};
