class Solution {
    public boolean isAnagram(String s, String t) {

        char[] sSorted = s.toCharArray();
        char[] tSorted = t.toCharArray();
        Arrays.sort(sSorted);
        Arrays.sort(tSorted);

        return  Arrays.equals(sSorted, tSorted);

    }
}
