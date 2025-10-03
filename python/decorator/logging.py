def log(func):
    def wrapper(*args, **kwargs):
        print(f"Calling {func.__name__} with {args}, {kwargs}")
        return func(*args, **kwargs)
    return wrapper

@log
def multiply(a, b):
    return a * b

print(multiply(4, 5))
