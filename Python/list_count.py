a=[1,2,3,1,4,5,6,3,8,3,1,9]
print(a)
print(a.count(3))
print(a.count(7))


def fun_count(b):
    print("the elements are:")
    print(b)
    ele=int(input("enter the element to count the repetation:"))
    print(b.count(ele))
                        
list=[]
n=int(input("enter the no.of elements:"))
print("enter the list elements:")
for i in range(0,n):
    ele=int(input())
    list.append(ele)
fun_count(list)
