# problem

"""
* 
* * 
* * * 
* * * * 
* * * * * 
"""

# solution
class pattern:
    def printt(self,n):
        for i in range(n):
            for j in range(i+1):
                print("*",end=" ")
            print("\n")
if __name__=="__main__":
    n=int(input())
    p=pattern()
    p.printt(n)