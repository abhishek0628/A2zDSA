class Recursion:
    def __init__(self,n):
        self.n=n
    def ntone(self,n):
        if n==0:
            return 
        print(n,end=" ")
        self.ntone(n-1)
if __name__=="__main__":
    n=int(input())
    R=Recursion(n)
    R.ntone(R.n)
        