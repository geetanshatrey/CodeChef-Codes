// Link to the problem : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/555/week-2-september-8th-september-14th/3454/
// Problem Name : Compare Version Numbers
// Solution Method : String Manipulation

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int countZeroes1 = 0, countZeroes2 = 0;
        countZeroes1 = count(version1.begin(), version1.end(), '.');
        countZeroes2 = count(version2.begin(), version2.end(), '.');
        while(countZeroes1 != countZeroes2) {
            if(countZeroes1 < countZeroes2) {
                version1 += ".0";
                countZeroes1++;
            }
            else {
                version2 += ".0";
                countZeroes2++;
            }
        }
        int c = 0;
        for(int i = 0; i < version1.length() - 1; i++) {
            if(version1[i] == '0' && version1[i+1] != '.' && c == 1) {
                version1.erase(version1.begin() + i);
            } 
            if(version1[i] == '.' && version1[i+1] == '0') {
                c = 1;
            }
            else {
                c = 0;
            }
        }
        c = 0;
        for(int i = 0; i < version2.length() - 1; i++) {
            if(version2[i] == '0' && version2[i+1] != '.' && c == 1) {
                version2.erase(version2.begin() + i);
            } 
            if(version2[i] == '.' && version2[i+1] == '0') {
                c = 1;
            }
            else {
                c = 0;
            }
        }
        vector<int> vals1, vals2;
        string temp = "";
        for(int i = 0; i < version1.length(); i++) {
            if(version1[i] == '.') {
                int x = stoi(temp);
                vals1.push_back(x);
                temp = "";
            }
            else {
                temp = temp + version1[i];
            }
        }
        int x = stoi(temp);
        vals1.push_back(x);
        temp = "";
        for(int i = 0; i < version2.length(); i++) {
            if(version2[i] == '.') {
                int x = stoi(temp);
                vals2.push_back(x);
                temp = "";
            }
            else {
                temp = temp + version2[i];
            }
        }
        x = stoi(temp);
        vals2.push_back(x);
        for(int i = 0; i < vals1.size() && i < vals2.size(); i++) {
            if(vals1[i] < vals2[i]) {
                return -1;
            }
            else if(vals1[i] > vals2[i]) {
                return 1;
            }
        }
        return 0;
    }
};
