import java.util.Arrays;

public class merge_sort2 {

    // Method to merge two sorted subarrays
    public static void merge(int[] arr, int l, int m, int r) {
        int i = l;     // Initial index of the first subarray
        int j = m + 1; // Initial index of the second subarray
        int k = l;     // Initial index of the merged subarray
        int[] temp = new int[arr.length]; // Temporary array to hold merged elements

        // Merge the two subarrays into temp[]
        while (i <= m && j <= r) {
            if (arr[i] <= arr[j]) {
                temp[k] = arr[i];
                i++;
            } else {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of the first subarray, if any
        while (i <= m) {
            temp[k] = arr[i];
            i++;
            k++;
        }

        // Copy the remaining elements of the second subarray, if any
        while (j <= r) {
            temp[k] = arr[j];
            j++;
            k++;
        }

        // Copy the merged elements back into the original array
        for (int p = l; p <= r; p++) {
            arr[p] = temp[p];
        }
    }

    // Method to sort the array using merge sort algorithm
    public static void mergeSort(int[] arr, int l, int r) {
        if (l < r) {
            int m = (l + r) / 2; // Find the middle point

            // Recursively sort the first and second halves
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);

            // Merge the sorted halves
            merge(arr, l, m, r);
        }
    }

    // Main method to test the merge sort algorithm
    public static void main(String[] args) {
        int[] arr = {9, 8, 7, 6, 5, 4, 3}; // Initial array to be sorted

        // Call mergeSort on the entire array
        mergeSort(arr, 0, arr.length - 1);

        // Print the sorted array
        System.out.println(Arrays.toString(arr));
    }
}
