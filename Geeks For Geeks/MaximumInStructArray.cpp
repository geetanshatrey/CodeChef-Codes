// Link to the problem : https://practice.geeksforgeeks.org/problems/maximum-in-struct-array/1/
// Problem Name : Maximum in Struct Array
// Time Complexity : O(N)
// Technique : Array Traversal + Structures


int findMax(Height arr[], int n)
{
    // Code here
    int max_height = 0;
    for(int i = 0; i < n; i = i+1) {
        if(12 * arr[i].feet + arr[i].inches > max_height) {
            max_height = 12 * arr[i].feet + arr[i].inches;
        }
    }
    return max_height;
}
