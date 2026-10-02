class Solution {
    public int maxWater(int arr[]) 
    {
        // code here
        int n=arr.length;
        int leftMax[]=new int[arr.length];
        int rightMax[]=new int[arr.length];
               leftMax[0] = arr[0];

               for (int i = 1; i < n; i++) {
                   leftMax[i] = Math.max(leftMax[i - 1], arr[i]);
               }

               rightMax[n - 1] = arr[n - 1];

               for (int j = n - 2; j >= 0; j--) {
                   rightMax[j] = Math.max(rightMax[j + 1], arr[j]);
               }

               int water = 0;

               for (int i = 0; i < n; i++) {
                   water += Math.min(leftMax[i], rightMax[i]) - arr[i];
               }

               return water;
    }
}
