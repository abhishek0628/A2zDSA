class Recursion:
    def __init__(self,n):
        self.n=n
    def Print(self,n):
        if n==0:
            return
        print("hello",end="\n")
        self.Print(n-1)
if __name__=="__main__":
    n=int(input())
    R=Recursion(n)
    R.Print(n)