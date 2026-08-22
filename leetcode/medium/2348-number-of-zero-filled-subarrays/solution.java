class Solution {
    public long zeroFilledSubarray(int[] arr) {
        long count=0;
        long consecutiveZero=0;
       
        for(int num:arr)
        {
            if (num == 0) {
                consecutiveZero++;
                count += consecutiveZero;
            } else {
                consecutiveZero = 0;
            }
        }
        
        return count;
    }
}