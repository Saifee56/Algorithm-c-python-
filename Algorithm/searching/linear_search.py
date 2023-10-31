#Class Declaration
class LinearSearch:
    def __init__(self,data):
        self.data=data
        
    #Implement Linear Search
    def linear_search(self,target):
        for i,item in enumerate(self.data):
            if item==target:
                return i
        return -1

numbers=[10,20,30,40,50,60,70]
target_number=50

search_number=LinearSearch(numbers)
result=search_number.linear_search(target_number)

if result != -1:
    print(f"{target_number} is found at index {result}")
else:
    print(f'{target_number} is not found in the list')
