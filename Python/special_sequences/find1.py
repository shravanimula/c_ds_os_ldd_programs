import re
a="hello world, $ Good Morning india 25 %"
b=re.findall("w.r",a)
print(b)
c=re.findall("o.d",a)
print(c)
d=re.findall("n.n",a)
print(d)
g=re.findall("n.i",a)
print(g)

m=re.findall("w...d",a)
print(m)
n=re.findall("G..d",a)
print(n)
o=re.findall("n..a",a)
print(o)
