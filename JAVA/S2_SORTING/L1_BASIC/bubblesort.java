import java.util.ArrayList;
import java.util.Scanner;
class sort{
    public void bubblesort(ArrayList<Integer>arr){
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size()-i-1;j++){
                if(arr.get(j)>arr.get(j+1)){
                    int t=arr.get(j);
                    arr.set(j,arr.get(j+1));
                    arr.set(j+1,t);
                }
            }
        }
    }
}
public class bubblesort{
    public static void main(String[]args){
        sort s=new sort();
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> arr=new ArrayList<>();
        System.out.print("enter size of array: ");
        int n=sc.nextInt();
        System.out.print("enter element of array: ");
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        s.bubblesort(arr);
        for(int i=0;i<n;i++){
            System.out.print(arr.get(i)+" ");
        }

    }
}