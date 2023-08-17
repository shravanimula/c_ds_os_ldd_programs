
s='hello hii helo hihelo helohi'
print(s)
a=s.split()
print(a)
l=[]
for word in a:
    ele=word.endswith('lo')
    if ele:
        l.append(word)
print(l)


s2='hello2hi4 ts5'
length=len(s2)
print(s2)
l2=[]
print("length of s2:",length)
for i in s2:
    ele=i.isalpha()
    if ele:
        l2.append(i)

print(l2)

d=[]
for i in s2:
    num=i.isdecimal()
    if num:
        d.append(i)

print("the numbers from that string is:")
print(d)


s3='HEllO ts HYd '
print(s3)
lower=[]
for i in s3:
    elem=i.islower()
    if elem:
        lower.append(i)

print("the lower elements are:")
print(lower)

