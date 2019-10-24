//实现思路是 在f(n-1)已知的情况下，求f(n)
//这个思路真的很棒！！！
//核心概念： 
//"(" + 【i=p时所有括号的排列组合】 + ")" + 【i=q时所有括号的排列组合】
//其中 p + q = n-1，且 p q 均为非负整数。
//ps:要补习一下迭代器这一块的知识
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n == 0)    return { "" };
        if(n == 1)    return { "()" };
        vector<vector<string>> dp(n+1);
        dp[0] = { "" };
        dp[1] = { "()" };
        for(int i = 2; i <= n; i++){
            for(int j = 0; j < i; j++){
                for(string p:dp[j]){
                    for(string q: dp[i-j-1]){
                        string str = "(" + p + ")" + q;
                        dp[i].push_back(str);
                    }
                }
            }
        }
        return dp[n];
    }
};

