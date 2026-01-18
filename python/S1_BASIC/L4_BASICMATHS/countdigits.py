class Solution:
    def __init__(self,num):
        self.num=num
    def digitcount(self):
        count=0
        temp=self.num
        while temp>0:
            count+=1
            temp=temp//10
        return count
if __name__=="__main__":
    n=int(input("enter number :"))
    s=Solution(n)
    print(s.digitcount())

