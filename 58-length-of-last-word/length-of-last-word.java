class Solution {
    public int lengthOfLastWord(String s) 
    {
        String[] text = s.split(" ");
        int n = text.length;

        return text[n-1].length();
    }
}