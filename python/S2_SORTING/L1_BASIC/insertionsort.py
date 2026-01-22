class sort:
    def __init__(self,arr):
        self.arr=arr

    def insertionsort(self):
        n=len(self.arr)
        for i in range(0,n):
            key=self.arr[i]
            j=i-1
            while(j>=0 and key<self.arr[j]):
                self.arr[j+1]=self.arr[j]
                j-=1
            self.arr[j+1]=key
                
            
        
if __name__=="__main__":
    n=int(input("enter size of array :"))
    arr=list(map(int,input("enter array element: ").split()))
    s=sort(arr)
    s.insertionsort()
    for i in arr:
        print(i,end=" ")

