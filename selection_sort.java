public class selection_sort {
    public static void main(String[] args) {
        int []array={9,8,1,4,6,12,0};
        selectionSort(array);
        for(int i=0; i<array.length;i++){
            System.out.println(array[i]);
        }
    }
    static void selectionSort(int array[]){
        for(int i=0; i<array.length-1;i++){
            int min=i;
            for(int j=i+1;j <array.length;j++){
                if(array[min] >array[j]){
                    min=j;
                }
            }
            int temp=array[i];
            array[i]=array[min];
            array[min]=temp;
        }
    }
}
