# def my_decorator(func):
#     def wrapper():
#         print("before")
#         func()
#         print("after")
#     return wrapper

# def func():
#     print("hello")

# def greet():
#     print("hello world")
# x=my_decorator(greet)   
# x() 

# #using decorator
# @my_decorator
# def say_hi():
#     print("hey")

# say_hi()    

def my_decorator(func):
    def wrapper(*args, **kwargs):
        print("Function is starting...")
        result = func(*args, **kwargs)
        print("Function has finished.")
        return result
    return wrapper

@my_decorator
def add(a, b):
    return a + b

print(add(3, 5))
