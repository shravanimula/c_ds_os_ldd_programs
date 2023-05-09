a=[1,2,3,4,5,'aaaa','bbbb']
print(a)
a.reverse()
print(a)
b=[]
n=int(input('enter the number of elements in the list:'))
print("enter the list elements:")
for i in range(0,n):
    element=int(input())
    b.append(element)
print(b)
b.reverse()
print(b)

