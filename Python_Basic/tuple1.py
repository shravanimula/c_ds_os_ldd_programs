t=(1,2,3,4,5,6,7)
print(t)
length=0
for i in t:
    length=length+1
print("length of tuple is:",length)



t1=(74,38,9,25,82,52,7)
print(t1)
l=list(t1)
print("converting the tuple into list:")
print(l)
for i in range(len(l)):
    for j in range(i+1,len(l)):
        if(l[i] > l[j]):
            temp=l[i]
            l[i]=l[j]
            l[j]=temp

print(l)
t2=tuple(l)
print("after sort the tuple is:")
print(t2)

#find max element in tuple 
max_ele=0
for i in t2:
    if max_ele < i:
        max_ele=i
print("max element in the tuple is:")
print(max_ele)


t3=(11,22,33,44,55,66)
print(t3)
print("converting the tuple into list:")
l3=[]
l3=list(t3)
print(l3)


print("converting the tuple into set:")
set2={}
set2=set(t3)
print(set2)
