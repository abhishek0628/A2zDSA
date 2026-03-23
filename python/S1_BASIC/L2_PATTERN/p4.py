"""
1
22
333
4444
55555
"""

# solution
class pattern:
    def printt(self,n):
        for i in range(n):
            for j in range(i+1):
                print(i+1,end="")
            print("\n")
if __name__=="__main__":
    n=int(input())
    p=pattern()
    p.printt(n)