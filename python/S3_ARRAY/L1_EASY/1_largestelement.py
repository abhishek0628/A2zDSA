class math:
    def __init__(self,arr):
        self.arr=arr
    def largestelement(self):
        max=self.arr[0]
        n=len(self.arr)
        for i in range(n):
            if max<self.arr[i]:
                max=self.arr[i]
        return max

if __name__=="__main__":
    n=int(input("enter size of array :"))
    arr=list(map(int,input("enter element of array: ").split()))
    m=math(arr)
    print(m.largestelement())