class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2){
            return -1;
        }
        int count1=nums[0],count2=nums[0];
        for(int i=0;i<nums.size();i++){
            if(count1>nums[i]){
                count1=nums[i];
            }
            if(count2<nums[i]){
                count2=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=count1 && nums[i]!=count2){
                return nums[i];
            }
        }
        return nums[0];
        
    }
};