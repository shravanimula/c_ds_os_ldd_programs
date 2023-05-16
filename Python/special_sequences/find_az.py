import re
a="hello world, $ Good Morning india 25 %"
b=re.findall("[A-Z]",a)
print(b)
