
"""
1
12
123
1234
12345
"""

# solution
class pattern:
    def printt(self,n):
        for i in range(n):
            for j in range(i+1):
                print(j+1,end="")
            print("\n")
if __name__=="__main__":
    n=int(input())
    p=pattern()
    p.printt(n)