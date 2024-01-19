#include <iostream>
using namespace std;

void Merge(int arr[],int l,int m,int r)
{
    int i=l;
    int j=m+1;
    int k=l;
    int temp[7];

    while(i<=m && j<=r)
    {
        if(arr[i] <=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int p=l; p<=r;p++)
    {
        arr[p]=temp[p];
    }
}
void MergeSort(int arr[],int l,int r)
{
    int m= (l+r)/2;
    if(l<r)
    {
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }

}
int main()
{
    int arr[]={9,8,7,6,5,4,3};
    MergeSort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
