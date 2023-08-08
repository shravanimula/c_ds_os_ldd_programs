#funtion with arguments and not return value
def function(x,y):
    x = x ^ y
    y = x ^ y
    x = x ^ y
    print("in function the values are:")
    print('x=',x,'y=',y)
a=int(input('enter a number:'))
b=int(input('enter b number:'))
print('a=',a,'b=',b)
function(a,b)
