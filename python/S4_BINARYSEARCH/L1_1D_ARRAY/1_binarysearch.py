
class search:
    def __init__(self,arr):
        self.arr=arr
    def binarysearch(self,key):
        l=0
        h=len(self.arr)-1
        while(l<=h):
            mid=l+(h-l)//2
            if self.arr[mid]==key:
                return mid
            if self.arr[mid]>key:
                h=mid-1
            else :
                l=mid+1
        return -1
if __name__=="__main__":
    n=int(input("enter sizeof array: "))
    arr=list(map(int,input("enter element of array in sorted order :").split()))
    key=int(input("enter element to search :"))
    s=search(arr)
    r=s.binarysearch(key)
    if r==-1:
        print("element not found ")
    else:
        print("found at index :",r)