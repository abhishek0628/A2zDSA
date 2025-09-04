import java.util.*;
class sort{
    int partition(List<Integer>arr,int start,int end)
    {int pivot=arr.get(end);
       int i=start-1;
       for(int j=start;j<end;j++)
       {
        if(pivot>arr.get(j))
        {
            i++;
            int t=arr.get(i);
            arr.set(i,arr.get(j));
            arr.set(j,t);
        }
       }
        int t=arr.get(end);
            arr.set(end,arr.get(i+1));
            arr.set(i+1,t);
            return i+1;


        

    }
    void quicksort(List<Integer>arr,int l,int r)
    {
        if(l<r)
        {
            int p=partition(arr,l,r);
            quicksort(arr,l,p-1);
            quicksort(arr,p+1,r);

        }
    }
}
public class quicksort{
    public static void main(String[] args) {
        {
            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();
            List<Integer> arr=new ArrayList<>();
            for(int i=0;i<n;i++){
                int num=sc.nextInt();
                arr.add(num);
            }
            sort s=new sort();
            s.quicksort(arr,0,n-1);
            for(int i=0;i<n;i++){
                System.out.print(arr.get(i)+" ");
            }
        }
    }
}