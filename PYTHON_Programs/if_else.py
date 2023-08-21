#using if else find the factorial
def factorial(n):
    if n==1:
        return 1
    else :
        return (n*factorial(n-1))

num=int(input("enter a number:"))
result=factorial(num)
print("factorial of " ,num ,"is",result)
