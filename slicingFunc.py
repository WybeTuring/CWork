def slicer(arr):
    start = 0
    ans = []
    for i in range(1,len(arr)-1):
        if (arr[start] < arr[i]) and (arr[i+1] <= arr[start]) and (arr[i] > arr[i+1]): # Checks to ensure that the next element in the list is larger than the start, but different
            hold = arr[start:i+1]
            start = i
            ans.append(hold)

    if start != len(arr) -2: #checks for the remaining elements and appends them. This is technically a safety net
        ans.append(arr[start:])
    return ans

print("Enter the values of the tankl description: ")
tank = input().split()
# changing the contents of the tank form strings to integers
for i in range(0, len(tank)):
    tank[i] = int(tank[i])
# Testing reasons
print(slicer(tank))
