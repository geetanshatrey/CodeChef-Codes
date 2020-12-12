// Link to the problem : https://leetcode.com/problems/reorder-data-in-log-files/
// Problem Name : Reorder Data in Log Files

class Solution {
public: 
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> lets, digs;
        multimap<string,string> letters;
        
        for(int i = 0; i < logs.size(); i++) {
            string temp1 = "", temp2 = "";
            string x;
            int f = 0;
            int c = 0;
            int firstSpace = -1;
            for(int j = 0; j < logs[i].length(); j++) {
                x = "";
                f = 0;
                while(logs[i][j] != ' ' && j < logs[i].length()) {
                    if(firstSpace == -1) {
                        x += logs[i][j];
                        f = 1;
                    }
                    else {
                        if(f == 0 && logs[i][j] >= 97 && logs[i][j] <= 122) {
                            f = 1;
                        }
                        x += logs[i][j];
                    }   
                    j++;
                }
                if(firstSpace == -1) {
                    firstSpace = j+1;
                }                 
                if(f == 0) {
                    if(c == 0) {
                        temp2 += x;
                        c = 1;
                    }
                    else {
                        temp2 += " "; 
                        temp2 += x;
                    }
                    
                }
                else {
                    if(c == 0) {
                        temp1 += x;
                        c = 1;
                    }
                    else {
                        temp1 += " "; 
                        temp1 += x;
                    }
                }
            }
            logs[i] = temp1 + temp2;
            if(temp2 == "") {
                letters.insert(make_pair(logs[i].substr(firstSpace, logs[i].length() - firstSpace), logs[i]));
            }
            else {
                digs.push_back(logs[i]);
            }
        }
        multimap<string,string>:: iterator itr;
        for(itr = letters.begin(); itr != letters.end(); itr++) {
            multimap<string,string>:: iterator itr2;
            itr2 = std::next(itr,1);
            if(itr->first == itr2->first && itr2 != letters.end()) {
                vector<string> t;
                while(itr->first == itr2->first && itr2 != letters.end()) {
                    t.push_back(itr->second);
                    itr++;
                    itr2++;
                }
                t.push_back(itr->second);
                sort(t.begin(), t.end());
                for(int i = 0; i < t.size(); i++)
                    lets.push_back(t[i]);
            }
            else
                lets.push_back(itr->second);
        }
        vector<string> res;
        for(int i = 0; i < lets.size(); i++) {
            res.push_back(lets[i]);
        }
        for(int i = 0; i < digs.size(); i++) {
            res.push_back(digs[i]);
        }
        return res;
    }
};
