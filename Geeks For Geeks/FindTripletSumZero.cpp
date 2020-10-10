// Link to the problem : https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1/
// Problem Name : Find triplets with zero sum
// Time Complexity : O(N^2)
// Technique : Sorting and window

// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}// } Driver Code Ends


/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int arr[], int n)
{
    sort(arr, arr + n);
    for(long int i = 0; i < n-1; i++) {
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while(l < r) {
            if(x + arr[l] + arr[r] == 0) {
                return true;
            }
            else if(x + arr[l] + arr[r] < 0) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return false;

}
