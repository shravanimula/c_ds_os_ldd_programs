'''
a
b a
c b a
d c b a
e d c b a
'''

n=int(input("enter the number of rows:"))
for i in range(0,n,1): 
    for j in range(97+i,96,-1):
        print(chr(j),end=' ')
    print(' ')
