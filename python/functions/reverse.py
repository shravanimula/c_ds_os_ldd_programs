def reverse_number(n):
    rev=0
    while(n!=0):
        rev=rev*10+n%10
        n=n//10
    print("after reversing the number is",rev)


num=int(input("enter a number:"))
print("before reversing the number is ",num)
reverse_number(num)
