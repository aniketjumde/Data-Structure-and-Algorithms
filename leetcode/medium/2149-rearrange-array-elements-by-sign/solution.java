class Solution {
    public int[] rearrangeArray(int[] arr) 
    {
        int[] ans = new int[arr.length];
        int pos=0;
        int neg=1;
        for(int num :arr)
        {
            if(num>0)
            {
                ans[pos]=num;
                pos+=2;
            }
            else
            {
                ans[neg]=num;
                neg+=2;
            }
        }
        return ans;
    }
}