def factorial(num):
    fact=1
    while num > 0:
        fact=fact *num
        num-=1
    return fact

number=int(input("enter a number:"))
result=factorial(number)
print("the result of the number is:",result)
