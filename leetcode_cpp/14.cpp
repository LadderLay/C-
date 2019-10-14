class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        if(len==0)  return "";
        if(len==1)  return strs.at(0);
        
        int j=0;
        while(1){
            for(int i=0;i<len;i++){
                if(j >= strs.at(i).size())
                    return strs.at(i).substr(0,j);
                char c=strs.at(0).at(j);
                if(c!=strs.at(i).at(j))
                    return strs.at(i).substr(0,j);
            }
            j++;
        }
        
    }
};
        