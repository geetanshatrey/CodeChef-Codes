// Link to the problem : https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1/
// Problem Name : Sum of Array Elements
// Time Complexity : O(N)
// Technique : Linear Traversal


int sumElement(int arr[],int n)
{
    //Your code here
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
