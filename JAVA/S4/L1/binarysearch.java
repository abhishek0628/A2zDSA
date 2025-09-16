import java.util.*;
class search{
    int bsearch(List<Integer>arr,int n,int key)
    {
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr.get(mid)==key)return mid;
            if(arr.get(mid)<key)
            {
                l=mid+1;
            }
            else r=mid-1;
        }
        return -1;
    }
}
public class binarysearch{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        List<Integer>arr=new ArrayList<>();
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            int num=sc.nextInt();
            arr.add(num);
        }
        int key=sc.nextInt();
        search s=new search();
        int r=s.bsearch(arr,n,key);
        if(r==-1)System.out.print("no");
        else System.out.print(r);
    }
}