def swap_fun(m,n):
    m = m ^ n
    n = m ^ n
    m = m ^ n
    print("after swapping the two numbers is")
    print("m=",m,"\tn=",n)

a=int(input("enter a number:"))
b=int(input("enter b number:"))
print("before swap two numbers are a=",a  ,"b=",b)
swap_fun(a,b)
