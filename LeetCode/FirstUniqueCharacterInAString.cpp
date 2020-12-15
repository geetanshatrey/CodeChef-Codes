// Link to the problem : https://leetcode.com/problems/first-unique-character-in-a-string/
// Problem Name : First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> res;
        map<char, int>:: iterator itr;
        int arr[26];
        fill(arr,arr + 26,-1);
        
        for(int i = 0; i < s.length(); i++) {
            itr = res.find(s[i]);
            if(itr != res.end()) {
                itr->second++;
            }
            else {
                arr[s[i] - 'a'] = i;
                res.insert(make_pair(s[i],1));
            }
        }
        int min = INT_MAX;
        for(itr = res.begin(); itr != res.end(); itr++) {
            if(itr->second == 1) {
                if(arr[itr->first - 'a'] < min) {
                    min = arr[itr->first - 'a'];
                }
            }
        }    
        if(min == INT_MAX)
            return -1;
        return min;            
    }
};
