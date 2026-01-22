import java.util.ArrayList;
import java.util.Scanner;
class sort{
    void selectionsort(ArrayList<Integer>arr){
        for(int i=0;i<arr.size()-1;i++){
            int min_idx=i;
            for(int j=i;j<arr.size();j++){
                if(arr.get(min_idx)>arr.get(j)){
                    min_idx=j;
                }
            }
            if(min_idx!=i){
                int t=arr.get(min_idx);
                arr.set(min_idx,arr.get(i));
                arr.set(i,t);
            }
        }
    }
}
public class selectionsort{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer>arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        sort s=new sort();
        s.selectionsort(arr);
        for(int i=0;i<n;i++){
            System.out.print(arr.get(i)+" ");
        }
    }
}