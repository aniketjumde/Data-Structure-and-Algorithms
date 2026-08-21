class Solution {
    public int firstNonRepeating(int[] arr) 
    {
       HashMap<Integer,Integer> map=new HashMap<>();
       
       for(int ch:arr)
       {
           map.put(ch,map.getOrDefault(ch,0)+1);
       }
       
       for(int i=0;i<arr.length;i++)
       {
           if(map.get(arr[i])==1)
           {
               return arr[i];
           }
       }
        
        return 0;
    }
}
