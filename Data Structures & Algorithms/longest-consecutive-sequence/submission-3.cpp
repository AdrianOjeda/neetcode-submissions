class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> mySet;

        for(int i =0; i<nums.size(); i++){
            mySet.insert(nums[i]);
        }
        int maxSeq = 0;


        for(int i = 0; i<nums.size(); i++){
            if(mySet.find(nums[i]-1) == mySet.end()){
                int currentSeq = 1,
                    seq = nums[i]+1;
                while(mySet.find(seq) != mySet.end()){
                    seq++;
                    currentSeq++;
                }
                maxSeq = max(currentSeq, maxSeq);
            }
        }


        return maxSeq;
    }
};
