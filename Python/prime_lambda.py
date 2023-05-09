from functools import reduce

def isprime(n):
    for i in range(2,n//2):
        if (n%i)==0:
            return False
        return True

List=[5,6,97,13,20,12]
prime_list=list(filter(isprime,List))
print(prime_list)
max_element=reduce((lambda x,y: x if x>y else y),prime_list)
print(max_element)
