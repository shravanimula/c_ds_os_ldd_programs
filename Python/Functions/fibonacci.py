def fibanacci(num):
    if num ==0:
        return 0
    elif num == 1:
        return 1
    else:
        return (fibanacci(num-1) + fibanacci(num-2))

number=int(input("enter a number:"))
result=fibanacci(number);
print("the result of fibanacci is:",result)
