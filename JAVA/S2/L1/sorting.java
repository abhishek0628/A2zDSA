import java.util.*;
class sort{

    // void swap(int *a,int *b)
    // {
    //     int t=*a;
    //     t=*b;
    //     *b=t;
    // }
    void swap(List<Integer>arr,int i,int j)
    {
        int t=arr.get(i);
        arr.set(i,arr.get(j));
        arr.set(j,t);
    }



    void selectionsort(List <Integer>arr,int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            for(int j=i;j<n;j++)
            {
                if(arr.get(j)<arr.get(min))
                {
                    min=j;
                }

            }
            if(min!=i)
            {
                // int t=arr.get(min);
                // arr.set(min,arr.get(i));
                // arr.set(i,t);
                // swap(arr[i],arr[min]);
                swap(arr,i,min);
            }
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr.get(i)+" ");
        }
    }
}
public class sorting
{
    public static void main(String[] args) {
        {
            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();
            List <Integer> arr=new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                int num=sc.nextInt();
                arr.add(num);
            }
            sort s=new sort();
            s.selectionsort(arr,n);

         
        }
    }
}