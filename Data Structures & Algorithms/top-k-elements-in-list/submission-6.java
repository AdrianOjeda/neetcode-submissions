class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        Map<Integer, Integer> frecuencyMap = new HashMap<>();
        
        for(int i = 0; i<nums.length; i++){
            if(frecuencyMap.containsKey(nums[i])){
                frecuencyMap.merge(nums[i], 1, Integer::sum);
            }else{
                frecuencyMap.put(nums[i], 1);

            }
        }

        frecuencyMap.forEach((key,value) -> System.out.println(key + " => "+value));

        int[] result = new int[k];

        Map<Integer, Integer> sorted = frecuencyMap.entrySet()
                                            .stream()
                                            .sorted(Map.Entry.comparingByValue())
                                            .collect(Collectors.toMap(
                                            Map.Entry::getKey,
                                            Map.Entry::getValue,
                                            (e1, e2) -> e1,
                                            LinkedHashMap::new
                                            ));
        

        sorted.forEach((key, value) -> System.out.println("Key = " + key + ", Value = " + value));
        List<Integer> valuesList = new ArrayList<>(sorted.keySet());
        int pos = valuesList.size()-1;

        for(int i = 0; i < k; i++){
            result[i] = valuesList.get(pos);
            pos--;
        }

        return result;
        
    }
}
