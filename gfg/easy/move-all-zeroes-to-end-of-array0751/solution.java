class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int i=0;
        for(int j=0;j<arr.length;j++)
        {
            if(arr[j]!=0)
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                i++;
            }
        }
    }
}