"""
* * * * * 
* * * * 
* * * 
* * 
* 
"""

# solution
class pattern:
    def printt(self,n):
        for i in range(n,0,-1):
            for j in range(i):
                print("*",end="")
            print("\n")
if __name__=="__main__":
    n=int(input())
    p=pattern()
    p.printt(n)