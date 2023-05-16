import re
a="hello world, good morning india 25"
b=re.findall("\w",a)
print(b)

d="hello world, good morning india 25"
e=re.findall("\W",d)
print(e)
