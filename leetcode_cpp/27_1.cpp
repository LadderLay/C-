class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val)
                nums[cnt++]=nums[i];
        }
        return cnt;
    }
};
//不需要考虑数组中超出新长度后面的元素