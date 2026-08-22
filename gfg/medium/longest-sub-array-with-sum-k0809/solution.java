class Solution {
    public int longestSubarray(int[] arr, int k) {
        // code here
        
        int sum=0;
        int length=0;
        
        Map<Integer,Integer> map=new HashMap<Integer,Integer>();
        map.put(0, -1);
        
        for(int i=0;i<arr.length;i++)
        {
            sum+=arr[i];
            
            int val=sum-k;
            
            if(map.containsKey(val))
            {
                int currentLength = i - map.get(val);

                length=Math.max(length,currentLength);
            }
            
            if(!map.containsKey(sum))
            {
                map.put(sum,i);
            }
        }
        
        return length;
    }
}
