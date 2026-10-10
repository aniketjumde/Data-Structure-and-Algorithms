class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) 
    {
        
        Set<Integer> set1=new HashSet<>();
        Set<Integer> set2=new HashSet<>();

        List<List<Integer>> ans=new ArrayList<>();

        for(int num:nums1)
        {
            set1.add(num);
        }

        for(int num:nums2)
        {
            set2.add(num);
        }

        for(int num:nums1)
        {
            if(set2.contains(num))
            {
                set2.remove(num);
            }
        }

        for(int num:nums2)
        {
            if(set1.contains(num))
            {
                set1.remove(num);
            }
        }

        ans.add(new ArrayList(set1));
        ans.add(new ArrayList(set2));

        return ans;
    }
}