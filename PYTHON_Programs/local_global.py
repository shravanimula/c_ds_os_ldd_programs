b=10
def fun1():
    a=11
    print(a)
    print(b)

def fun2():
    a=20
    print(a)

def fun3():
    global b
    b=b +33
    print(b)
fun1()
fun2()
fun3()

