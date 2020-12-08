// Link to the problem : https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1/
// Problem Name : Print first letter of every word in the string
// Time Complexity : O(N)
// Technique : Linear Traversal

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string a = "";
	    int N = S.length();
	    for(int i = 0; i < N; i++) {
	        if(i == 0 && S[i] != ' ') {
	            a += S[i];
	        }
	        if(S[i] == ' ' && i != N-1) {
	            a += S[i+1];
	        }
	    }
	    return a;
	}
};