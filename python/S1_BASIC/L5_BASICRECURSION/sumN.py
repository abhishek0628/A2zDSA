class Recursion:
    def __init__(self,n):
        self.n=n
        self.sum=0
    def sumN(self,n):
        if n==0:
            return self.sum
        self.sum+=n
        return self.sumN(n-1)
if __name__=="__main__":
    n=int(input())
    R=Recursion(n)
    print(R.sumN(R.n))
        