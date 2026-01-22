class math:
    def __init__(self,arr):
        self.arr=arr
    def removed(self):
        sett=set()
        for i in range(len(self.arr)):
            sett.add(self.arr[i])
        return list(sett)
if __name__=="__main__":
    n=int(input("enter size of array: "))
    arr=list(map(int,input("enter element of array :").split()))
    m=math(arr)
    set=m.removed()
    print(set)