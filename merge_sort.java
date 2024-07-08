public class merge_sort {

    public static void mergeSort(int arr[],int l, int r){
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);

            merge(arr,l,r,mid);
        }
    }
    public static void merge(int arr[],int l, int r, int mid){

        //Array Size
        int n1=mid-l+1;
        int n2=r-mid;
        int arr1[]=new int[n1];
        int arr2[]=new int[n2];

        //Copying elements
        for(int a=0;a<n1;a++){
            arr1[a]=arr[l+a];
        }
        for(int b=0;b<n2;b++){
            arr2[b]=arr[mid+1+b];
        }

        //Checking Conditions
        int i=0;
        int j=0;
        int k=l;

        while(i <n1 && j< n2){
            if(arr1[i] <= arr2[j]){
                arr[k]=arr1[i];
                i++;
            }
            else {
                arr[k]=arr2[j];
                j++;
            }
            k++;
        }

        //Adding remaining elements for both arrays
        while(i < n1){
            arr[k]=arr1[i];
            i++;
        }
        while(j < n2){
            arr[k]=arr2[j];
            j++;
        }

    }
    public static void main(String[] args) {
        int arr[]={6,3,9,5,2,8};
        mergeSort(arr,0,arr.length-1);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}
