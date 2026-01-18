class solution:
    def __init__(self,num):
        self.num=num
    def divisors(self):
        for i in range(1,self.num+1):
            if self.num%i==0:
                print(i,end=" ")
if __name__=="__main__":
    num=int(input("enter number: "))
    s=solution(num)
    s.divisors()

