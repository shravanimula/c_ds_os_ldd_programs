def swap(x,y):
    x=x ^ y
    y=x ^ y
    x=x ^ y
    print("after swapping the numbers:",x,y)

a=int(input("enter a number:"))
b=int(input("enter b number:"))
print("before swapping the numbers are:",a,b)
swap(a,b)
