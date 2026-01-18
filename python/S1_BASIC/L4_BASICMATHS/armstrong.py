class Solution:
    def __init__(self,num):
        self.num=num
    def digitcount(self,n):
        count=0
        while n>0:
            count+=1
            n=n//10
        return count

    def armstrong(self):
        temp=self.num
        count=self.digitcount(temp)
        sum=0
        while temp>0:
            d=temp%10
            sum+=d**count
            temp//=10
        return sum==self.num
if __name__=="__main__":
    n=int(input("enter number"))
    s=Solution(n)
    print(s.armstrong())

