'''
a
a b
a b c
a b c d
a b c d e
'''

n=int(input("enter the number of rows:"))

for i in range(1,n+1,1):
    ch=96
    for j in range(1,i+1,1):
        ch=ch+1
        print(chr(ch),end=' ')
    print(' ')
