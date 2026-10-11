class Solution {
    public int mostWordsFound(String[] sentences) {
        
        int cmax=Integer.MIN_VALUE;
        for(String sen:sentences)
        {
            String[] word=sen.split(" ");
            int count=0;
            for(String w:word)
            {
                count++;
            }
            cmax=Math.max(count,cmax);
        }

        return cmax;
    }
}