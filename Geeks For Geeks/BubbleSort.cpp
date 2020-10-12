// Link to the problem : https://practice.geeksforgeeks.org/problems/bubble-sort/1/
// Problem Name : Bubble Sort
// Time Complexity : O(N)
// Technique : Bubble Sorting



//User function Template for C++

/* The task is to complete bubble() which is used 
   in below bubbleSort() */

/* A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} */

void bubble(int arr[], int i, int n)
{
    // Your code here  
    for(int j = 0; j < n - i - 1; j++) {
        if(arr[j] > arr[j+1]) {
            swap(&arr[j],&arr[j+1]);
        }
    }
}
