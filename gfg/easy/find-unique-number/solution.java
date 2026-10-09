class Solution {
    public int findUnique(int[] arr) {
        // code here
        
        int xorSum=0;
        for(int n:arr)
        {
            xorSum=xorSum^n;
        }
        
        return xorSum;
    }
}