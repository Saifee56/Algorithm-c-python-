//Quick sort

#include <iostream>
using namespace std;

void swap(int arr[],int i, int j)
{
   int temp;
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return i+1;
}
void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int loc=partition(arr,low,high);
        quick_sort(arr,low,loc-1);
        quick_sort(arr,loc+1,high);
    }
}

int main()
{
    int arr[]={10,9,8,7,67,2,5};
    quick_sort(arr,0,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

