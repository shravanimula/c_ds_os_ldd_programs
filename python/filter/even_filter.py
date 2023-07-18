def even(num):
    if num%2==0:
        return True
    else:
        return False

    
List=[2,3,4,5,6,7,8,9,10]
list1=list(filter(even,List))
print(list1)
