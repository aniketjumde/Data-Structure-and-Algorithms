class Solution {
    public int findPermutationDifference(String s, String t) {
        
        int sum=0;
        for(char ch:s.toCharArray())
        {
            int i=0;
            sum+=Math.abs(i-t.indexOf(ch));
            i++;
        }
        
        return sum;
    }
}