class Solution {
public:
    bool isValid(string s) {
        stack <char> res;
        if(s=="") return true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                res.push(s[i]);
            else if(res.size()==0)
                return false;
            else{
                if((s[i]==')'&&res.top()=='(') || (s[i]==']'&&res.top()=='[') || (s[i]=='}'&&res.top()=='{')){
                    res.pop();
                }else{
                    return false;
                }
            }
        }
        if(res.size()!=0)
            return false;
        return true;
    }

};
