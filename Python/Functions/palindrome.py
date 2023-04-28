def palindrome(num):
    rev=0
    while num >0:
        rev=rev*10+num%10
        num//=10
    return rev

number=int(input("enter a number:"))
result=palindrome(number)
if(number == result):
    print(number ,"is palindrome")
else:
    print(number, "is not a palindrome")

