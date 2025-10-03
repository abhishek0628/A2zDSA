'''
A static method is a method inside a class that:

Does not use self (instance)

Does not use cls (class itself)

It’s basically just a normal function, 
but placed inside a class for logical grouping.
'''
class myclass:
    @staticmethod
    def my_method(arg1,arg2):
        return arg1+arg2
    
class math:
    @staticmethod
    def add(a,b):
        return a+b
    
print(math.add(6,7))
m=math()
print(m.add(2,89))
