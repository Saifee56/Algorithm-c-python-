# Class Declaration
class BubbleSort:
    def __init__(self, arr):
        self.arr = arr

    def bubble_sort(self):
        n = len(self.arr)

        for i in range(n):
            for j in range(0, n - i - 1):
                if self.arr[j] > self.arr[j + 1]:
                    # Swap elements using a temporary variable
                    temp = self.arr[j]
                    self.arr[j] = self.arr[j + 1]
                    self.arr[j + 1] = temp

    def display(self):
        print("Sorted Array:")

        for element in self.arr:
            print(element, end=' ')

if __name__ == "__main__":
    unsorted_arr = [76, 56, 1, 34, 2, 4, 9]
    result = BubbleSort(unsorted_arr)
    result.bubble_sort()
    result.display()