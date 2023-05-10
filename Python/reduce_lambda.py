
from functools import reduce
L=[10,20,30,40,50,60,70]
result=reduce(lambda x,y:x+y,L)
print(result)
