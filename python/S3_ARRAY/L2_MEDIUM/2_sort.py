class sort:
    def __init__(self,arr):
        self.arr=arr
    def heapify(self,i,n):
        largest=i
        left=2*i+1
        right=2*i+2
        if left<n and self.arr[left]>self.arr[largest]:
            largest=left
        if right<n and self.arr[right]>self.arr[largest]:
            largest=right
        if i!=largest:
            self.arr[i],self.arr[largest]=self.arr[largest],self.arr[i]
            self.heapify(largest,n)
    def heapsort(self):
        n=len(self.arr)
        for i in range(n//2-1,-1,-1):
            self.heapify(i,n)
        for i in range(n-1,-1,-1):
            self.arr[0],self.arr[i]=self.arr[i],self.arr[0]
            self.heapify(0,i)
        for x in self.arr:
            print(x,end=" ")
if __name__=="__main__":
    n=int(input("enter sizeof array: "))
    arr=list(map(int,input("enter element of array: ").split()))
    s=sort(arr)
    s.heapsort()

