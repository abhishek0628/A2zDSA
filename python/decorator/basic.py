def my_decorator(func):
    def wrapper():
        print("before")
        func()
        print("after")
    return wrapper    
def say_hi():
    print("hello")

decorated_func=my_decorator(say_hi)
decorated_func()