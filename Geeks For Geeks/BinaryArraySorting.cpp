// Link to the problem : https://practice.geeksforgeeks.org/problems/binary-array-sorting5355/1
// Problem Name : Binary Array Sorting
// Time Complexity : O(N)
// Technique : Two Pointer

vector<int> SortBinaryArray(vector<int> arr)
{
    // Your code goes here
    int p, q;
    p = 0;
    q = 1;
    while(q < arr.size()) {
        if(arr[p] == 1 && arr[q] == 0) {
            int temp = arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
            p = p + 1;
            q = q + 1;
        }
        else if(arr[p] == 0 && arr[q] == 0) {
            p++;
            q++;
        }
        else if(arr[p] == 0 && arr[q] == 1) {
            p = q;
            q = p + 1;
        }
        else {
            q = q + 1;
        }
    }
    return arr;
}
