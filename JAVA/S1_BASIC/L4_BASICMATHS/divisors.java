class solution{
    void divisors(int num){
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                System.out.print(i+" ");
            }
            
        }
        System.out.print(num);
    }
}
public class divisors{
    public static void main(String[]args){
        solution s=new solution();
        s.divisors(6034);
    }
}