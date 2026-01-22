
import java.util.ArrayList;
class recursion{
    void reverse(ArrayList<Integer>arr,int start,int end){
        if(start>=end)return;
        int t=arr.get(start);
        arr.set(start,arr.get(end));
        arr.set(end,t);
        reverse(arr,start+1,end-1);

    }
}
public class reversearray{
    public static void main(String[] args){
        ArrayList<Integer>arr=new ArrayList<>();
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        recursion r=new recursion();
        int n=arr.size();
        r.reverse(arr,0,n-1);
        System.out.print(arr);
    }
}