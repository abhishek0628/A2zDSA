class math:
    def __init__(self,arr):
        self.arr=arr
    def isSorted(self):
        n=len(self.arr)
        if(n<=2):
            return 1
        if self.arr[0]>self.arr[1]:
            for i in range(n-1):
                if self.arr[i+1]>self.arr[i]:
                    return 0
            return 1
        for i in range(n-1):
            if self.arr[i+1]<self.arr[i]:
                return 0
        return 1
if __name__=="__main__":
    n=input("enter array size: ")
    arr=list(map(int,input("enter array element :").split()))
    m=math(arr)
    r=m.isSorted()
    if r==0:
        print("no")
    else:
        print("yes")