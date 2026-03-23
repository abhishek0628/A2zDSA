# problem
# print patterns

# input:5
# output:
"""
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
"""
# solution

class pattern:
    def squarepattern(self,n):
        for i in range(n):
            for j in range(n):
                print("*",end=" ")
            print(end="\n")
if __name__=="__main__":
    n=int(input())
    p=pattern()
    p.squarepattern(n)

