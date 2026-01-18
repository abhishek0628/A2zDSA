
class sort:
    def __init__(self,arr):
        self.arr=arr
    def bubblesort(self):
        n=len(self.arr)
        for i in range(n):
            for j in range(0,n-1-i):
                if self.arr[j]>self.arr[j+1]:
                    self.arr[j],self.arr[j+1]=self.arr[j+1],self.arr[j]

if __name__=="__main__":
    n=int(input("enter number: "))
    arr=list(map(int,input("enter element: ").split()))
    # for i in range(n):
    #     t=int(input())
    #     arr.append(t)
    s=sort(arr)
    s.bubblesort()
    for x in arr:
        print(x,end=" ")