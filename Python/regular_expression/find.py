import re
a="hello world,hello good morning india 25"
b=re.findall("hello",a)
print(b)
b=re.findall("z",a)
print(b)
