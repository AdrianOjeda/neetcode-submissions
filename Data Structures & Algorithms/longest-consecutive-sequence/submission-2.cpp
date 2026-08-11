class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> setNums;
        int maxCount = 1, currentCount =1;
        for(int i =0; i<nums.size(); i++){
            setNums.insert(nums[i]);
        }
        for(int i : setNums){
            
            if(setNums.find(i-1) == setNums.end()){
                int sequence = i;
                while(setNums.find(sequence+1) != setNums.end()){
                    currentCount++;
                    sequence++;
                    if(currentCount> maxCount){
                        maxCount =currentCount;
                        
                    }
                }
                currentCount =1;
            }
        }
        return maxCount;
    }
};