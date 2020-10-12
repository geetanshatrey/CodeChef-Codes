// Link to the problem : https://practice.geeksforgeeks.org/problems/selection-sort/1
// Problem Name : Selection Sort
// Time Complexity : O(N^2)
// Technique : Selection Sort

int select(int arr[], int i)
{
    // code here such that selectionSort() sorts arr[]
    int n, max = arr[i], j = i;
    for(int z = i-1; z >= 0; z--) {
        if(arr[z] > max) {
            max = arr[z];
            j = z;            
        }
    }
    return j;
}
 
void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
