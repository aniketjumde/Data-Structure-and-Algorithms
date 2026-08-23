class Solution {
    public int subarraysDivByK(int[] arr, int k) 
    {

        Map<Integer, Integer> map = new HashMap<>();
        map.put(0, 1);
        int sum = 0;
        int count = 0;

        for (int num : arr) 
        {
            sum += num;

            int rem = sum % k;

            if (rem < 0) {
                rem += k;
            }

            count += map.getOrDefault(rem, 0);

            map.put(rem, map.getOrDefault(rem, 0) + 1);
        }

        return count;





        // int currentLength=0;

        // for(int i=0;i<arr.length;i++)
        // {
        //     int sum=0;

        //     for(int j=i;j<arr.length;j++)
        //     {
        //         sum+=arr[j];
        //         if(sum%k==0)
        //         {
        //             currentLength++;
        //             // int length=Math.max(length,currentLength);
        //         }
        //     }
        // }

        //return currentLength;   
    }
}