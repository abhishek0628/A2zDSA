class solution{
    int fib(int n){
        if(n==0||n==1)return n;
        return fib(n-1)+fib(n-2);
    }
    int fib2(int num){
        int fibn=0;
        int fib0=0;
        int fib1=1;
        for(int i=2;i<=num;i++){
            fibn=fib0+fib1;
            fib0=fib1;
            fib1=fibn;
            

        }
        return fibn;
    }
}
public class fibonacci{
    public static void main(String[] args){
        solution s=new solution();
        System.out.print(s.fib2(7));
    }
}