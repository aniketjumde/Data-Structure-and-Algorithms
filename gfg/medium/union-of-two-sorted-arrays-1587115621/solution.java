class Solution {
    public static ArrayList<Integer> findUnion(int a[], int b[]) 
    {
        // code here
        Set<Integer> set = new TreeSet<>();

        for (int num : a) {
            set.add(num);
        }

        for (int num : b) {
            set.add(num);
        }

       ArrayList<Integer> result = new ArrayList<>(set);

       Collections.sort(result);

        return new ArrayList<>(set);
    }
}
