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
    def secondlargest(self):
        n=len(self.arr)
        if n<2:
            return -1
        s=-999
        max=self.largestelement()
        for i in range(n):
            if self.arr[i]>s and self.arr[i]<max:
                s=self.arr[i]
        return s
if __name__=="__main__":
    n=int(input("enter size of array: "))
    arr=list(map(int,input("enter element of array: ").split()))
    m=math(arr)
    print(m.secondlargest())