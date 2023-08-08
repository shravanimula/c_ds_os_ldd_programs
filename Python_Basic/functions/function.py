def factorial(num):
    fact=1
    while(num > 0):
        fact=fact*num
        num=num-1
    return fact

a=int(input("enter anumber:"))
result=factorial(a)
print("the factorial is:",result)
