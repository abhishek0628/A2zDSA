class Recursion:
    def __init__(self,arr):
        self.arr=arr
    def reverse(self,arr,start,end):
        if start>=end:
            return
        arr[start],arr[end]=arr[end],arr[start]
        self.reverse(arr,start+1,end-1)
if __name__=="__main__":
    arr=list(map(int,input().split()))
    n=len(arr)
    R=Recursion(arr)
    R.reverse(arr,0,n-1)
    print(arr)
