// Link to the problem : https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/
// Problem Name : Wave Array
// Time Complexity : O(N)
// Technique : Linear Traversal

void convertToWave(int *arr, int n){
    
    // Your code here
    for(int i = 0; i < n-1; i = i + 2) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
}
