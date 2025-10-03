def my_decorator(func):
    def wrapper(*args,**kwargs):
        print("starting")
        result=func(*args,**kwargs)
        print("finished")
        return result
    return wrapper
@my_decorator
def add(a,b):
    return a+b
print(add(4,8))