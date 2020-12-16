// Link to the problem : https://leetcode.com/problems/subdomain-visit-count/
// Problem Name : Subdomain Visit Count

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> res;
        map<string, string> val; 
        map<string,string>:: iterator itr;
        for(int i = 0; i < cpdomains.size(); i++) {
            string data, str;
            int n = cpdomains[i].length();
            for(int j = 0; j < n; j++) {
                if(cpdomains[i][j] == ' ') {
                    data = cpdomains[i].substr(0, j);
                    str = cpdomains[i].substr(j+1, n - j - 1);
                    break;
                }
            }
            itr = val.find(str);
            if(itr != val.end()) {
                itr->second = to_string(stoi(itr->second) + stoi(data));
            }
            else {
                val.insert(make_pair(str, data));
            }
            int m = str.length();
            for(int k = 1; k < m; k++) {
                if(str[k-1] == '.') {
                    string q = str.substr(k, m-k);
                    itr = val.find(q);
                    if(itr != val.end()) {
                        itr->second = to_string(stoi(itr->second) + stoi(data));
                    }
                    else {
                        val.insert(make_pair(q, data));
                    }
                }
            }
        }
        for(itr = val.begin(); itr != val.end(); itr++) {
            string x = itr->second + " " + itr->first;
            res.push_back(x);
        }
        return res;
    }
};
