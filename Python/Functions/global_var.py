a=10
def function():
    global a
    a = a + 20
    print(a)
function()
print(a)
