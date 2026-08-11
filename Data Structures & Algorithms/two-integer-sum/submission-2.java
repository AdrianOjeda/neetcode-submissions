class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> myMap = new HashMap<>();
        int[] result = new int[2];

        for(int i =0; i< nums.length; i++){
            int diff= target-nums[i];

            if(!myMap.containsKey(nums[i])){
                myMap.put(diff, i);
            }else{
                result[0] = myMap.get(nums[i]);
                result[1] = i;
            }

        }
        return result;
    }
}
