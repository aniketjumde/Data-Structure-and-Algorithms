class Solution {
    static int findFloor(int[] arr, int x) {
        // code here
        
        int index=-1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<=x)
            {
                index=i;
            }
        }
        
        return index;
    }
}
