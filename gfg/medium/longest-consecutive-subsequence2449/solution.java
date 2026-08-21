class Solution {
    public int longestConsecutive(int[] arr) {
        // code here
        int current=1;
        int longest=1;
        
        Arrays.sort(arr);
        
        for(int i=1;i<arr.length;i++)
        {
            if(arr[i]==arr[i-1])
            {
                continue;
            }
            
            if(arr[i]==arr[i-1]+1)
            {
                current++;
            }
            else
            {
                current=1;
            }
            
            longest=Math.max(longest,current);
        }
        
        return longest;
    }
}