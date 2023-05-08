a=[66,33,99,22,88,11,55]
print(a)
a.sort()
print(a)

list=[]
n=int(input("Please enter the no.of elements: "))
for i in range(1, n+1):
    value= int(input("Please enter the Value of element:"))
    list.append(value)
for i in range (n):
    for j in range(i + 1, n):
        if(list[i] > list[j]):
            temp = list[i]
            list[i] = list[j]
            list[j] = temp
print(list)
