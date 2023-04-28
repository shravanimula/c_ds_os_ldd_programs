def prime(num):
    flag=0
    for i in range(2,(num//2)+1):
        if num % i == 0:
            flag=1
            break
    return flag

number=int(input("enter a number:"))
result=prime(number)
if result == 1:
    print(number ,"is not a prime number")
else:
    print(number , "is prime number")
