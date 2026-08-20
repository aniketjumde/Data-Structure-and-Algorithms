class Solution {
    public ArrayList<Integer> intersect(int[] a, int[] b) {
        // co
        
        HashSet<Integer> set=new HashSet<>();
        ArrayList<Integer> list=new ArrayList<>();
        for(int i=0;i<a.length;i++)
        {
            set.add(a[i]);
        }
        
        for(int i=0;i<b.length;i++)
        {
           if(set.contains(b[i]))
           {
               list.add(b[i]);
               set.remove(b[i]);
           }
        }
        
        Collections.sort(list);
        return list;
    }
}