public class QuickSort {

    public static int partition(int arr[], int left, int right) {

        int pivot = arr[right];
        int i = left - 1;

        for (int j = left; j < right; j++) {

            if (arr[j] <= pivot) {

                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Put pivot at correct position
        i++;

        int temp = arr[i];
        arr[i] = arr[right];
        arr[right] = temp;

        return i;
    }


    public static void quickSort(int arr[], int left, int right) {

        if (left < right) {

            int p = partition(arr, left, right);

            quickSort(arr, left, p - 1);
            quickSort(arr, p + 1, right);
        }
    }


    public static void main(String[] args) {

        int arr[] = {8,3,5,4,7,6,1,2};

        quickSort(arr, 0, arr.length - 1);

        for (int x : arr)
            System.out.print(x + " ");
    }
}