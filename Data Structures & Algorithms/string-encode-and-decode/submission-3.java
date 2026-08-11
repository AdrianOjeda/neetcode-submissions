class Solution {

    public String encode(List<String> strs) {
        StringBuilder encodedString = new StringBuilder();
        for(int i = 0; i < strs.size(); i++){
            int stringLength = strs.get(i).length();
            encodedString.append(stringLength)
                        .append("#")
                        .append(strs.get(i));
            
        }
        System.out.println(encodedString);

        return encodedString.toString();

    }

    public List<String> decode(String str) {
        StringBuilder decodedString = new StringBuilder(str);
        List<String> decodedList = new ArrayList();
        int i = 0;

        while(i<str.length()){
            int j = i;

            while(str.charAt(j) != '#'){
                j++;
            }

            int size = Integer.parseInt(str.substring(i, j));
            String word = str.substring(j+1, j+1+size);
            decodedList.add(word);
            i = j+1+size;

        }
        return decodedList;

    }
}
