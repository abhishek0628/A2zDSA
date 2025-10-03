def greet():
    print("hello")
greet()

def greet2(name):
    print(f"hello,{name}")
greet2("alex")

def greet3(name="alice"):
    print(f"hello,{name}")
greet3("bob")
greet3()

def add(a,b):
    return a+b
print(add(78,90))


'''
Arbitrary Arguments (*args and **kwargs)

*args → any number of positional arguments

**kwargs → any number of keyword arguments
'''

def add_numbers(*args):
    return sum(args)
# for i in range(1,50):
    # print(add_numbers())

print(add_numbers(1,2,2,3,40))

def student_details(**kwargs):
    for key,value in kwargs.items():
        print(f"{key}:{value}")
        
student_details(name="Alice", age=20, branch="CSE")

#lamda function
square=lambda x:x**2
print(square(7))

add = lambda a, b: a + b
print(add(2, 3))  # 5