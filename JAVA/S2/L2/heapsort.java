import java.util.*;
class sort{
    void maxheapify(List<Integer>arr,int n,int i)
    {
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && arr.get(left)>arr.get(largest))
        {
            largest=left;
        }
        if(right<n && arr.get(right)>arr.get(largest))
        {
            largest=right;
        }
        if(largest!=i)
        {
            // swap(arr.get(largest),)
            int t=arr.get(largest);
            arr.set(largest,arr.get(i));
            arr.set(i,t);
            maxheapify(arr,n,largest);
        }
    }
    void heapsort(List<Integer>arr,int n)
    {
        for(int i=n/2;i>=0;i--)
        {
            maxheapify(arr,n,i);
        }
        for(int i=n-1;i>=0;i--)
        {
            int t=arr.get(0);
            arr.set(0,arr.get(i));
            arr.set(i,t);
            maxheapify(arr,i,0);
        }

    }
    void display(List<Integer>arr,int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.print(arr.get(i)+" ");
        }
    }
}
public class heapsort
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        List<Integer>arr=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            int num=sc.nextInt();
            arr.add(num);
        }
        sort s=new sort();
        s.heapsort(arr,n);
        s.display(arr,n);
    }
}