import re
a="hello world, $ Good  Morning india.     25 %"
b=re.sub("[ ,.]","##",a)
print(b)
