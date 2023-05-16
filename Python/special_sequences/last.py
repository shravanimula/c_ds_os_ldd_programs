import re
a="hello world, good morning india 25"
b=re.findall("india 25\Z",a)
print(b)
c=re.findall("hello\Z",a)
print(c)
