import re
a="hello world, good morning india 25"
b=re.findall("\Ahello",a)
print(b)
c=re.findall("\Aworld",a)
print(c)
