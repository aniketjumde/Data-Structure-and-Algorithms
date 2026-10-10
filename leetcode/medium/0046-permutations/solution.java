class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();

        backtrack(nums,0,result);

        return result;

    }

    private void backtrack(int[] nums,int idx,List<List<Integer>> result)
    {
        if (idx == nums.length) {
            List<Integer> permutation = new ArrayList<>();

            for (int num : nums) {
                permutation.add(num);
            }

            result.add(permutation);
            return;
        }

        for (int i = idx; i < nums.length; i++) {

            // Choose an element for position idx
            swap(nums, idx, i);

            // Explore the remaining positions
            backtrack(nums, idx + 1, result);

            // Undo the swap
            swap(nums, idx, i);
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}