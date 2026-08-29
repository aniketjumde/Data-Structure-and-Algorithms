class Solution {
    public int maxFrequencyElements(int[] nums) {
        
        HashMap<Integer,Integer> map=new HashMap<>();

        for(int num:nums )
        {
            map.put(num,map.getOrDefault(num,0)+1);
        }

        int maxs = 0;

        for (int frequency : map.values()) {
            maxs = Math.max(maxs, frequency);
        }

        int sum = 0;

        for (int frequency : map.values()) {
            if (frequency == maxs) {
                sum += frequency;
            }
        }

        return sum;
    }
}