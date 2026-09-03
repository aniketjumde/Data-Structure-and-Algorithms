class Solution {
    public int firstUniqueEven(int[] nums) 
    {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int num:nums)
        {
            if(num%2==0)
            {
                map.put(num,map.getOrDefault(num,0)+1);
            }
        }   

        int count=0;
        for(Map.Entry<Integer,Integer> entry:map.entrySet())
        {
            if(entry.getValue()==1 )
            {
                count++;
            }
        }
        return count;
    }
}