#find the largest number in list
l=[2,84,26,29,8,5,35]
print(l)
max_element=0
for i in l:
    if max_element < i:
        max_element=i

print(max_element)

#second largest element

l1=[54,82,69,3,4,9,64,71]
print(l1)
first_largest=0
second_largest=0
for i in l1:
    if i > first_largest:
        second_largest=first_largest
        first_largest=i
    else :
        if i > second_largest & i < first_largest:
            second_largest=i

print("first_largest=",first_largest)
print("second_largest=",second_largest)

#reverse the list:

l2=[11,22,33,44,55,66,77]
print(l2)
l3=[]

for i in l2:
    l3=[i]+l3
print(l3)

t=()
t=tuple(l2)
print("converting the list into string:")
print(t)

s="hello thundersoft india hyd"
a=[]
a=s.split()
print("converting string into list")
print(a)

b={}
print("converting list into set")
b=set(l2)
print(b)
