def sumofthedigits(num):
    sum=0
    while(num > 0):
        sum=sum + num % 10
        num=num//10
    print("sum of the digits is =",sum)

number=int(input("enter a number"))
sumofthedigits(number)
