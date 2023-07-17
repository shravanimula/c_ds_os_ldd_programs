def palindrom(n):
    temp=n
    rev=0
    while(temp!=0):
        rev=rev*10+temp%10
        temp=temp//10

    if(n==rev):
        print(n ,"is a palindrome")
    else:
        print(n,"is not a palindrome")



num=int(input("enter the number:"))
palindrom(num)
