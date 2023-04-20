a=int(input("enter the a:"))
b=int(input("enter the b:"))
print("before swap the value")
print("a=",a,"b=",b)
a = a ^ b
b = a ^ b
a = a ^ b
print("after swap a and b value")
print("a=",a,"b=",b)
