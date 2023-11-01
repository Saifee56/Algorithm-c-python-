#Declaring Class
class BinarySearch:
    def __init__(self,data):
        self.data=data
        self.data.sort()  #Data must be sorted

    def binary_search(self,target):
        l,r=0,len(self.data)-1

        while l <= r:
            mid=(l + r) // 2

            if self.data[mid] == target:
                return mid
            elif self.data[mid] < target:
                l= mid + 1
            else:
                r = mid - 1
        return -1

data_list=[30,10,20,60,1]
target_number=1

search_number=BinarySearch(data_list)
result=search_number.binary_search(target_number)

if result != -1:
    print(f"{target_number} is found at index {result}")
else:
    print(f'{target_number} is not found in the list')