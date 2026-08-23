class Solution {
    public int subarraysDivByK(int[] arr, int k) 
    {
        int prefixSum = 0;
        int longest = 0;

        Map<Integer, Integer> map = new HashMap<>();
       
        map.put(0, -1);

        for (int i = 0; i < arr.length; i++) {

            prefixSum += arr[i];

            int rem = prefixSum % k;

            // Handle negative remainder
            if (rem < 0) {
                rem += k;
            }

            if (map.containsKey(rem)) {

                int length = i - map.get(rem);

                longest = Math.max(longest, length);

            } else {

                // Store only earliest occurrence
                map.put(rem, i);
            }
        }




        return longest;
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