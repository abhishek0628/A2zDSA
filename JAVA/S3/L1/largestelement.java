import java.util.*;
class Array
{
    int max(List<Integer>arr,int n)
    {
        int m=arr.get(0);
        for(int i=0;i<n;i++)
        {
            if(m<arr.get(i))
            {
                m=arr.get(i);
            }

        }
        return m;
    }
}
public class largestelement{
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
        Array a=new Array();
        System.out.print(a.max(arr,n));
    }
}