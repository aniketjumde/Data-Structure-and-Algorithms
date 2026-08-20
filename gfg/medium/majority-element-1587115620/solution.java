class Solution {
    int majorityElement(int arr[]) 
    {
        // code here
        HashMap<Integer,Integer> map=new HashMap<>();
        
        for(int num:arr)
        {
            int count=map.getOrDefault(num,0)+1;
            map.put(num,count);
            
            if(count>arr.length/2)
            {
                return num;
            }
        }
        
        return -1;

    }
}