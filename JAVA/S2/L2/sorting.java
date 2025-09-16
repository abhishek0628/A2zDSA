import java.util.*;
class sort
{
    void merge(List<Integer>arr,int l,int mid,int r)
    {
        // mid=l+(r-l)/2;
        int n1=mid-l+1;
        int n2=r-mid;
        int []left=new int[n1];
        int []right=new int[n2];
        for(int i=0;i<n1;i++)
        {
            left[i]=arr.get(l+i);
        }
        for(int i=0;i<n2;i++)
        {
            right[i]=arr.get(mid+i+1);
        }
        int i=0;
        int j=0;
        int k=l;
        while(i<n1 && j<n2)
        {
            if(left[i]<=right[j])
            {
                arr.set(k,left[i]);
                i++;
            }
            else 
            {
                arr.set(k,right[j]);
                j++;
            }
            k++;
        }
        while(i<n1)
        {
            arr.set(k,left[i]);
            i++;
            k++;
        }
        while(j<n2)
        {
            arr.set(k,right[j]);
            j++;
            k++;
        }

    }

    void mergesort(List<Integer>arr,int l,int r)
    {
        
        if(l<r)
        {
            int mid=l+(r-l)/2;
            mergesort(arr,l,mid);
            mergesort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
        
    }
}
public class sorting{
    public static void main(String[] args) {
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
            s.mergesort(arr,0,n-1);
            for(int i=0;i<n;i++)
        {
            System.out.print(arr.get(i)+" ");
        }
        }
    }
}