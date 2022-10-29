// https://leetcode.com/problems/keyboard-row/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop",s2="asdfghjkl",s3="zxcvbnm";
        map<char,int> mp;
        vector<string> sss;
        for(auto x: s1) mp[x] = 1;
          for(auto x: s2) mp[x] = 2;
          for(auto x: s3) mp[x] = 3;
        for(int i =0; i<words.size(); i++){
            string wp = words[i];
            transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);
            int check = mp[words[i][0]],flag=0;
            for(auto x:words[i]){
                if(check != mp[x]){
                    flag=1;break;
                }
            }
            if(flag==0)
                sss.push_back(wp);
        }
        return sss;
    }
};
