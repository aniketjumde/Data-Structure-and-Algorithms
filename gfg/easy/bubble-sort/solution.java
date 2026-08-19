class Solution {
    public void bubbleSort(int[] arr) 
    {
        // code here
        
        int n=arr.length;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=1;j<=i;j++)
            {
                if(arr[j-1]>arr[j])
                {
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }
}