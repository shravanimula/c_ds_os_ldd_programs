import re
a="hello world,hello good morning india 25"
b=re.search("hello",a)
print(b)
c=re.search("morning",a)
print(c)
