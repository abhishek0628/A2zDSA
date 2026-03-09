class Factorial:
    def __init__(self,n):
        self.n=n
    def fact(self,n):
        if n<0:
            return -1
        if n==0 or n==1:
            return 1
        return self.fact(n-1)*n
if __name__=="__main__":
    n=int(input())
    f=Factorial(n)
    res=f.fact(f.n)
    print(res)
