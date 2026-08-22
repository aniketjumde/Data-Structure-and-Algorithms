class Solution {
    public int subarraySum(int[] arr, int k) 
    {
        int n=arr.length;
        int count=0;
        int[] ps=new int[n];
        ps[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
           ps[i]=ps[i-1]+arr[i];
        }

        Map<Integer,Integer> freq=new HashMap<>();
        for(int i=0;i<n;i++)
        {
            if(ps[i]==k)
            {
                count++;
            }

            int val=ps[i]-k;

            if(freq.containsKey(val))
            {
                count+=freq.get(val);
            }

            freq.put(ps[i],freq.getOrDefault(ps[i],0)+1);
        }
        
        return count;    
    }
}