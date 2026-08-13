class Solution {
    public boolean isPalindrome(String s) {

        StringBuilder sb = new StringBuilder(s.toLowerCase());
        StringBuilder processedString = new StringBuilder();

        for(int i =0; i< sb.length(); i++){
            char c = sb.charAt(i);

            if(Character.isLetterOrDigit(c)){
                processedString.append(c);
            }
        }

    
        int j = processedString.length()-1;
        for(int i =0; i<processedString.length()/2; i++){
            if(processedString.charAt(i) == processedString.charAt(j)){
                j--;
            }else{
                return false;
            }
        }
                        
        System.out.println(processedString);

        return true;
    }
}
