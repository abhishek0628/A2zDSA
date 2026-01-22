class solution{
    int fact(int num){
        if(num==0||num==1)return 1;
        return fact(num-1)*num;
    }
    int fact2(int n){
        int fact=1;
        for(int i=2;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
}
public class fact{
    public static void main(String[]args){
        solution s=new solution();
        System.out.print(s.fact2(5));

    }
}