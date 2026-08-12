public class MergedTwoSortedArray {

    public static void mergeArray(int a[], int b[]) {

        int c[] = new int[a.length + b.length];

        int i = 0; // Array a pointer
        int j = 0; // Array b pointer
        int k = 0; // Result pointer

        while (i < a.length && j < b.length) {

            if (a[i] < b[j]) {
                c[k++] = a[i++];
            }
            else {
                c[k++] = b[j++];
            }
        }

        // Remaining elements of a
        while (i < a.length) {
            c[k++] = a[i++];
        }

        // Remaining elements of b
        while (j < b.length) {
            c[k++] = b[j++];
        }

        for (int x : c) {
            System.out.print(x + " ");
        }
    }


    public static void main(String[] args) {

        int a[] = {1, 3, 5};
        int b[] = {2, 4, 6};

        mergeArray(a, b);
    }
}