class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        HashMap<String, List<String>> groups = new HashMap<>();
        List<List<String>> result = new ArrayList();


        for(int i=0; i<strs.length; i++){
            char[] stringArray = strs[i].toCharArray();
            Arrays.sort(stringArray);
            String sortedString = new String(stringArray);

            if(groups.containsKey(sortedString)){
                groups.get(sortedString).add(strs[i]);
            }else{
                List<String> anagramList = new ArrayList<>();
                anagramList.add(strs[i]);
                groups.put(sortedString, anagramList);
            }
            
        }

        for(List<String> anagramLists : groups.values()){
            result.add(anagramLists);
        }

        return result;
        
    }
}
