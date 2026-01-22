import java.util.ArrayList;
import java.util.Scanner;
class sort{
    void insertionsort(ArrayList<Integer>arr){
        for(int i=1;i<arr.size();i++){
            int key=arr.get(i);
            int j=i-1;
            while(j>=0 && arr.get(j)>key){
                arr.set(j+1,arr.get(j));
                j--;
            }
            arr.set(j+1,key);
            
        }
    }
}
public class insertionsort{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer>arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        sort s=new sort();
        s.insertionsort(arr);
        for(int i=0;i<n;i++){
            System.out.print(arr.get(i)+" ");
        }
    }
}