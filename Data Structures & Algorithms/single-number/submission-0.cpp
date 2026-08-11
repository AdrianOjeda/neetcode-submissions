class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int begin =  nums[0];
        for(int i =1; i<nums.size(); i++){
            begin ^= nums[i];
        }
        

        return begin;
        
    }
};