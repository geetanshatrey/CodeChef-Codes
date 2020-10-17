// Link to the problem : https://practice.geeksforgeeks.org/problems/triplet-family/1/
// Problem Name : Triplet Family
// Time Complexity : O(N * log N)
// Technique : Sorting

vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    sort(arr, arr + n);
    int tab[10001] = {0};
    for(int i = 0; i < n; i++) {
        tab[arr[i]] = 1;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i+1; j < n; j++) {
            if(tab[arr[i] + arr[j]] == 1) {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
                result.push_back(arr[i]+arr[j]);
                return result;
            }
        }
    }
    return result;
    // code here
}
