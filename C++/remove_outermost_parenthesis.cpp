// https://leetcode.com/problems/remove-outermost-pa
class Solution {
public:
 string removeOuterParentheses(string s) {
 stack<char>st;
 char pos = '(';string ans="";int ctr=0;
 for(int i=0; i<s.length();i++){
 if(st.empty() and s[i] == '('){
  st.push(s[i]);
  pos = i;continue;
 }
 if(s[i] == '('){
  ctr++;
  ans += s[i];
 }
 if(s[i] == ')'){
  ctr--;
  if(ctr==-1){
   st.pop();ctr=0;
   continue;
  }
  else{
   ans+=s[i];
  }
 }
 
  }
  return ans;
 }
};
