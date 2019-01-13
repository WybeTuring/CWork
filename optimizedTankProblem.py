def calculate(ls):
    size = len(ls)
    if ls[0] == ls[len(ls)-1]:
        max_size = ls[0]*(len(ls)-2)
        # Going through the loop to subtract the obstructions
        for i in range(1,size-2):
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
        max_size = ls[0]*(size-2)
        # Going through the loop to subtract to obstructions
        for i in range(1,size-2):
            if ls[i] >= ls[0]:
                max_size -= ls[0];
            else:
                max_size -= ls[i]
    return max_size;

# Getting the values
print(calculate([3, 0, 0, 4, 6, 7, 3, 4]))
print("Enter the values of the tankl description: ")
tank = input().split()

# changing the contents of the tank form strings to integers
for i in range(0, len(tank)):
    tank[i] = int(tank[i])

sumValue = 0
start = 0
k = 0

# Calculating the volume
while k < len(tank):
    if tank[k] > tank[start]:
        sumValue += calculate(tank[start:k+1])
        start = k
        k += 1

"""
if i != (len(tank) - 1):
    tank = tank[len(tank)-1:i:-1]
    j = 0
    while j < len(tank):
        if tank[j] > tank[start]:
            sumValue += calculate(tank[start:j+1])
            start = j
            j += 1
"""
print(sumValue)
print("Hello dude")
