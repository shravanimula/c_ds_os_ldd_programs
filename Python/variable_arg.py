def variable_argument(*args):
    print("the arguments are:",args)

variable_argument(10)
variable_argument(10,20,30)
variable_argument("aaaa",10)
variable_argument('aaaa','bbbbbb','cccccc')
variable_argument('a',1,'b',2)
variable_argument(1,'aaa',2,'bbbb',3,'cccc')
