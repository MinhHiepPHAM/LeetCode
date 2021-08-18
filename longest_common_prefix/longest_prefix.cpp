class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() < 1)
            return "";
        string ss = "";
        for(int i = 0; i < strs[0].length(); i++) {
            if(isPrex(strs[0][i], strs, i))
                ss.push_back(strs[0][i]);
            else
                break;
        }
        
        return ss;
    }
    
    bool isPrex(char c, vector<string> strs, int pos) {
        for(int i = 0; i < strs.size(); i++) {
            if(strs[i].size() < pos) 
                break;
            if(c != strs[i][pos])
                return false;
        }
        return true;
    }
};
