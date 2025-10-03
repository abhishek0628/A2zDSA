from functools import wraps

def my_decorator(func):
    @wraps(func)
    def wrapper(*args, **kwargs):
        print("Before function")
        return func(*args, **kwargs)
    return wrapper

@my_decorator
def greet():
    """This function greets"""
    print("Hello!")

print(greet.__name__)   # greet (not wrapper)
print(greet.__doc__)    # This function greets
