class Solution:
    def __init__(self,num):
        self.num=num
    def reverse(self):
        r=0
        temp=self.num
        while temp>0:
            r=r*10+(temp%10)
            temp//=10
        return r
    def isPalindrome(self):
        r=self.reverse()
        return r==self.num
    
if __name__=="__main__":
    num=int(input("enter number :"))
    s=Solution(num)
    print(s.reverse())
    print(s.isPalindrome())