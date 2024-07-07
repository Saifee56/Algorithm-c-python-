public class insertion {
    public static void main(String[] args) {
        int []array={9,1,2,7,3,6,5,4};
        insertion_sort(array);
        for(int i=0; i<array.length;i++){
            System.out.println(array[i]+" ");
        }
    }
    static void insertion_sort(int [] array){
        for(int i=1;i<array.length;i++){
            int temp=array[i];
            int j=i-1;
            while(j >=0 && array[j] > temp){
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=temp;
        }
    }
}
