// Link to the problem :https://practice.geeksforgeeks.org/problems/square-root/1/
// Problem Name : Square Root
// Time Complexity : O(logn)
// Technique : Binary Search 

#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);

// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    if(x == 1) {
        return 1;
    }
    long long int l = 0, h = x;
    while(l <= h) {
        long long int m = (l+h)/2;
        if(m == x/m) {
            return m;
        }
        else if(m > x/m) {
            h = m-1;
        }
        else {
            l = m + 1;
        }
    }
    return h;
    
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
