class Solution:
    def __init__(self,a,b):
        self.a=a
        self.b=b

    def hcf(self):
        min=0
        if self.a<self.b:
            min=self.a
        else:
            min=self.b
        for i in range(min+1,0,-1):
            if self.a%i==0 and self.b%i==0:
                return i
if __name__=="__main__":
    a=int(input("enter a: "))
    b=int(input("enter b: "))
    s=Solution(a,b)
    print(s.hcf())



