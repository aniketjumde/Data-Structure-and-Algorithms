class Solution {
    public int firstUniqueEven(int[] nums) 
    {
        HashMap<Integer, Integer> map = new HashMap<>();

        // Step 1: Count frequency of even numbers
        for (int num : nums) {
            if (num % 2 == 0) {
                map.put(num, map.getOrDefault(num, 0) + 1);
            }
        }

        // Step 2: Find the first unique even number
        for (int num : nums) {
            if (num % 2 == 0 && map.get(num) == 1) {
                return num;
            }
        }

        return -1;
    }
}