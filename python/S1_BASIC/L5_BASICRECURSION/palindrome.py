class Recursion:
    def __init__(self,Str):
        self.Str=Str
    def isPal(self,Str,start,end):
        if start>=end:
            return 1
        if Str[start]!=Str[end]:
            return 0
        return self.isPal(Str,start+1,end-1)
if __name__=="__main__":
    Str=input()
    n=len(Str)
    R=Recursion(Str)
    res=R.isPal(R.Str,0,n-1)
    print(res)
