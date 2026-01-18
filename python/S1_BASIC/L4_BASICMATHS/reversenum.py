class Solution:
    def __init__(self,num):
        self.num=num
    def reverse(self):
        r=0
        while self.num>0:
            r=r*10+(self.num%10)
            self.num//=10
        return r
    
if __name__=="__main__":
    num=int(input("enter number :"))
    s=Solution(num)
    print(s.reverse())