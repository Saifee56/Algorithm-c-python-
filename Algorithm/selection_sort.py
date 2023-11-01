#Declaring Class
class SelectionSort:
    def __init__(self,arr):
        self.arr=arr
    #Selection sort
    def selection_sort(self):
        n=len(self.arr)

        for i in range(n):
            min_index=i

            for j in range(i+1,n):
                if self.arr[j] < self.arr[min_index]:
                    min_index=j

            self.arr[i],self.arr[min_index] = self.arr[min_index] , self.arr[i]

    def display(self):
        print("Sorted Array")

        for element in self.arr:
            print(element, end=' ')
       

if __name__ == "__main__":

    unsorted_arr = [64, 34, 25, 12, 22, 11, 90]
    result = SelectionSort(unsorted_arr)
    result.selection_sort()
    result.display()