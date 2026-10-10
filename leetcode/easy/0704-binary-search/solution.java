class Solution {

    public int binarySearch(int arr[],int target,int start,int end)
    {
        if(start<=end)
        {
            int mid=start+(end-start)/2;

            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[mid]<target)
            {
                return binarySearch(arr,target,mid+1,end);
            }
            else
            {
                return binarySearch(arr,target,start,mid-1);

            }
        }

        return -1;
    }
    
    public int search(int[] nums, int target) {
        
        return binarySearch(nums,target,0,nums.length-1);
    }
}