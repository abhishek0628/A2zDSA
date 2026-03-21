class Sorting:
    def partition(self,arr,low,high):
        pivot=arr[high]
        i=low-1
        for j in range(low,high):
            if arr[j]<=pivot:
                i+=1
                arr[i],arr[j]=arr[j],arr[i]
        arr[i+1],arr[high]=arr[high],arr[i+1]
        return i+1
    def quicksort(self,arr,low,high):
        if low<high:
            p=self.partition(arr,low,high)
            self.quicksort(arr,low,p-1)
            self.quicksort(arr,p+1,high)

if __name__=="__main__":
    n=int(input())
    arr=list(map(int,input().split()))
    s=Sorting()
    s.quicksort(arr,0,n-1)
    for i in range(0,n):
        print(arr[i],end=" ")
        

