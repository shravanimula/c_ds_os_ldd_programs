
from functools import reduce

L=[5,6,97,12,13,20]
max_element=reduce((lambda x,y: x if x>y else y),L)
print(max_element)
