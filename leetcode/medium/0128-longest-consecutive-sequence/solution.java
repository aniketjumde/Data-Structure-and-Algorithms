class Solution {
    public int longestConsecutive(int[] arr) 
    {
        
        Arrays.sort(arr);
        int x=arr[0];
        int count=0;
        for(int i=0;i<arr.length;i++)
        {
            if(x==arr[i])
            {
                count++;
                x++;

            }
        }

        return count;
    }
}