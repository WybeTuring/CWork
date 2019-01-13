# Author: Lemfon Karl Ndze'dzenyuy
# Date: 13/01/2019
# Intent: This is an implementation that determines the number of litres that a given tank can contain. Tanks are passed in as arrays. For examples, the tank A = {2,0,2} can hold two litres
#         of water. The tank B = {3,0,2,5,4,7} can hold a total of


# This function calculates the total number of litres a tank of a certain nature may have. The tank must be structures in a way that prohibits a an element lower than the first
# Examples include {3, 0, 0, 4, 6, 7}, {7,3,4}, {2, 0, 2}
def calculate(ls):
    size = len(ls)
    if ls[0] == ls[len(ls)-1]:
        max_size = ls[0]*(len(ls)-2)
        # Going through the loop to subtract the obstructions
        for i in range(1,size-1):
            if ls[i] >= ls[0]:
                max_size -= ls[0];
            else:
                max_size -= ls[i]
    else:
        # making sure that the two boundaries default to the smaller value
        if ls[0] < ls[size-1]:
            ls[size-1] = ls[0]
        else:
            ls[0] = ls[size-1]
        # calulating the maximum value of the volume
        max_size = ls[0]*(size-1)
        # Going through the loop to subtract to obstructions
        for i in range(1,size-2):
            if ls[i] >= ls[0]:
                max_size -= ls[0];
            else:
                max_size -= ls[i]
    return max_size;
# Writing a function to split the array into desired descriptions
def slicer(arr):
    start = 0
    ans = []
    for i in range(1,len(arr)-1):
        if (arr[start] < arr[i]) and (arr[i+1] <= arr[start]) and (arr[i] > arr[i+1]):
            hold = arr[start:i+1]
            start = i
            ans.append(hold)

    if start != len(arr) -2:
        ans.append(arr[start:])
    return ans
# Getting the values
print("Enter the values of the tankl description: ")
tank = input().split()
# changing the contents of the tank form strings to integers
for i in range(0, len(tank)):
    tank[i] = int(tank[i])
# slicing the array into desired formats
arrays = slicer(tank)
# iteratively calculating the sum values
finalSum = 0
for array in arrays:
    print(calculate(array))
    finalSum += calculate(array)
print("The sum value for now is "+ str(finalSum))
