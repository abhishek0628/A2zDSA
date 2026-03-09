class Recursion:
    def __init__(self,n):
        self.n=n
    def oneton(self,n):
        if n==0:
            return 
        # print(n,end=" ")
        self.oneton(n-1)
        print(n,end=" ")
if __name__=="__main__":
    n=int(input())
    R=Recursion(n)
    R.oneton(R.n)
        