//典型的错误代码
/*
错误分析：
map是映射，特点是关键字只能出现一次，此处的思路是将数组元素作为键值存储，
需考虑到数组元素是可重复的
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i]) != m.end()){
                res={m[target-nums[i]],i};
            }
        }
        return res;
    }
};

//correct
//参考了别人的代码
//是我写不出的代码- -||咳咳
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i]) == m.end()){
                m[nums[i]]=i;
            }else{
                res={m[target-nums[i]],i};
            }
        }
        return res;
    }
};
