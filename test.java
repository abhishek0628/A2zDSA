import java.util.*;
class math{
    public int smallest(ArrayList<Integer>arr){
        int max=arr.get(0);
        for(int i=0;i<arr.size();i++){
            if(arr.get(i)>max)max=arr.get(i);
        }
        return max;
    }
    public int sum(ArrayList<Integer>arr){
        int s=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s+=arr.get(i);
        }
        return s;
    }
    public int average(ArrayList<Integer>arr){
        int n=arr.size();
        return sum(arr)/n;
    }
    void reverse(ArrayList<Integer>arr){
        int n=arr.size();
        for(int i=0;i<n/2;i++){
            int t=arr.get(i);
            arr.set(i,arr.get(n-1-i));
            arr.set(n-1-i,t);
        }
    }
    void duplicate(ArrayList<Integer>arr){
        Collections.sort(arr);
        for(int i=0;i<arr.size()-1;i++){
            if(arr.get(i)==arr.get(i+1)){
                System.out.print(arr.get(i)+" ");
            }
        }
    }
    void duplicate2(ArrayList<Integer>arr){
        HashSet<Integer> seen=new HashSet<>();
        HashSet<Integer> printed=new HashSet<>();

        for(int x:arr){
            if(seen.contains(x) && !printed.contains(x)){
                System.out.print(x+" ");
                printed.add(x);
            }
            seen.add(x);
        }

    }
    void frequency(ArrayList<Integer>arr){
        int[] f=new int[1000];
        for(int i=0;i<arr.size();i++){
            f[arr.get(i)]++;
        }
        for(int i=0;i<f.length;i++){
            if(f[i]>0){
                System.out.println(i+" "+f[i]);
            }
        }
    }
    void reverse2(ArrayList<Integer>arr,int start,int end){
        if(start>=end)return;
        int t=arr.get(start);
        arr.set(start,arr.get(end));
        arr.set(end,t);
        reverse2(arr,start+1,end-1);
    }
    void krotate(ArrayList<Integer>arr,int k){
        int n=arr.size();
        reverse2(arr,0,n-1);
        reverse2(arr,0,k-1);
        reverse2(arr,k,n-1);
    }
    void krotate2(ArrayList<Integer>arr,int k){
        int n=arr.size();
        reverse2(arr,0,n-1);
        reverse2(arr,0,n-k-1);
        reverse2(arr,n-k,n-1);
    }
    void movezeros(ArrayList<Integer>arr){
        int j=0;
        int n=arr.size();
        for(int i=0;i<n;i++){

            if(arr.get(i)!=0){
                int t=arr.get(i);
                arr.set(i,arr.get(j));
                arr.set(j,t);
                j++;
            }
        }
    }
    void movezeros2(ArrayList<Integer>arr){
        int j=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr.get(i)!=0){
                arr.set(j,arr.get(i));
                j++;
            }
        }
        for(int i=j;i<n;i++){
            arr.set(i,0);

        }

    }
    void even(ArrayList<Integer>arr){
        int j=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr.get(i)%2!=1){
                int t=arr.get(i);
                arr.set(i,arr.get(j));
                arr.set(j,t);
                j++;
            }
        }
    }
    int  missing(ArrayList<Integer>arr,int num){
        // int sum=num*(num+1)/2;
        // int sum2=0;
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     sum2+=arr.get(i);
        // }
        // return sum-sum2;
        int xor1=0;
        int xor2=0;
        int n=arr.size();
        for(int i=1;i<=num;i++){
            xor1^=i;
        }
        for(int i=0;i<n-1;i++){
            xor2^=arr.get(i);
        }
        // return xor1;
        return xor1^xor2;
    }
    int maxsum(ArrayList<Integer>arr){
        int maxsum=-999;
        int currentsum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            currentsum+=arr.get(i);
            if(currentsum>maxsum){
                maxsum=currentsum;
            }
            if(currentsum<0){
                currentsum=0;
            }
        }
        return maxsum;
    }
    void subarray(ArrayList<Integer>arr,int sum){
        int start=0;
        int currentsum=0;
        int n=arr.size();
        for(int end=0;end<n;end++){
            currentsum+=arr.get(end);
            while(currentsum>sum && start<=end){
                currentsum-=arr.get(start);
                start++;
            }
            if(currentsum==sum){
                System.out.print(start+" "+end);
                return;
            }
            // else System.out.print("not found");
        }
         System.out.print("not found");

    }
  

}
public class test{
    public static void main(String[]args){
        ArrayList<Integer>arr=new ArrayList<>(
            List.of(20,3,23,10)
        );
        int n=arr.size();
        math m=new math();
        // System.out.print(m.maxsum(arr));
        m.subarray(arr,33);
        // m.even(arr);
        // m.krotate(arr,3);
        // m.reverse2(arr,0,n-1);
        // System.out.println(m.average(arr));
        // m.frequency(arr);
        // m.reverse(arr);
        // for(int i=0;i<arr.size();i++){
        //     System.out.print(arr.get(i)+" ");
        // }
        // for(int x:arr){
        //     System.out.print(x+" ");
        // }
        // System.out.print(1^2);
    }
}