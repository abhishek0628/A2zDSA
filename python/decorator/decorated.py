def my_decorator(func):
    def wrapper():
        print("before")
        func()
        print("after")
    return wrapper
@my_decorator
def say_hi():
    print("hello")

say_hi()    