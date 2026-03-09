class Fibonacci:
    def __init__(self,n):
        self.n=n
    def fib(self,n):
        if n<0:
            return -1
        if n==0 or n==1:
            return n
        return self.fib(n-1)+self.fib(n-2)
if __name__=="__main__":
    n=int(input())
    f=Fibonacci(n)
    res=f.fib(f.n)
    print(res)

