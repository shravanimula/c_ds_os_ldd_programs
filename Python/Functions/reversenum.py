def reversethenumber(num):
    rev=0
    while num > 0:
        rev=rev*10 + num %10
        num=num//10
    print("after reverse the number is:",rev)
number=int(input("enter a number:"))
reversethenumber(number)
