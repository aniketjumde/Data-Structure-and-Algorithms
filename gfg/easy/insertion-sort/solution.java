class Solution {
    // Please change the array in-place
    public void insertionSort(int arr[]) 
    {
        // code here
        int j;
        for(int i=1;i<arr.length;i++)
        {
            int t=arr[i];
            for( j=i-1;j>=0;j--)
            {
                if(arr[j]>t)
                {
                    arr[j+1]=arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j+1]=t;
        }
    }
}