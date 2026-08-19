class Solution {
    public int findMinDiff(int arr[], int m) {
        // code here
        Arrays.sort(arr);
        
        int minDiff=Integer.MAX_VALUE;
        
        for(int i=0;i+m-1<arr.length;i++)
        {
            int diff=arr[i+m-1]-arr[i];
            minDiff=Math.min(diff,minDiff);
        }
        
        return minDiff;
    }
}