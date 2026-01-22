class sort:
    def __init__(self,arr):
        self.arr=arr
    def selectionsort(self):
        n=len(self.arr)
        for i in range(n-1):
            min_idx=i
            for j in range(i,n):
                if self.arr[j]<self.arr[min_idx]:
                    min_idx=j
            if i!=min_idx:
                self.arr[i],self.arr[min_idx]=self.arr[min_idx],self.arr[i]
if __name__=="__main__":
    n=int(input("enter size of array :"))
    arr=list(map(int,input("enter element of array :").split()))
    s=sort(arr)
    s.selectionsort()
    for x in arr:
        print(x,end=" ")