'user input list'

a=[]
n=int(input('enter the size of the list:'))
print("enter the list elements:")
for i in range(0,n):
    ele=int(input())
    a.append(ele)
print("the list elements are:")
print(a)

'length of the elements'
length=0
for i in a:
    length=length+1
print("length of the list:",length)


'sort the list'
for i in range(len(a)):
    for j in range(i+1,len(a)):
        if(a[i] > a[j]):
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
print(a)

