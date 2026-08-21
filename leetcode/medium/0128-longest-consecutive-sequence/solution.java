class Solution {
    public int longestConsecutive(int[] arr) {

        if (arr.length == 0) {
            return 0;
        }

        Arrays.sort(arr);

        int longest = 1;
        int current = 1;

        for (int i = 1; i < arr.length; i++) {

            // Duplicate → ignore
            if (arr[i] == arr[i - 1]) {
                continue;
            }

            // Consecutive
            if (arr[i] == arr[i - 1] + 1) {
                current++;
            }
            // Sequence broken
            else {
                current = 1;
            }

            longest = Math.max(longest, current);
        }

        return longest;
    }
}