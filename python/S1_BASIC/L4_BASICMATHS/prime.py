class Solution:
    def __init__(self,num):
        self.num=num
    def isPrime(self):
        if self.num<0:
            return 
        if self.num==1 or self.num==0:
            print("no")
            return 
        flag=0
        for i in range(1,self.num//2+1):
            if self.num%i!=0:
                flag=1
        if flag==0:
            print("yes")
        else:
            print("no")
if __name__=="__main__":
    n=int(input("enter number :"))
    s=Solution(n)
    s.isPrime()
