class solution{
    int isPrime(int num){
        if(num<2)return 0;
        if(num==2)return 1;
        int flag=1;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=0;
            }
        }
        if(flag==0){
            return 0;
            

        }
        return 1;
    }
}
public class prime{
    public static void main(String[] args){
        solution s=new solution();
        int r=s.isPrime(29);
        if(r==1)System.out.print("yes");
        else{
            System.out.print("no");
        }
        
    }
}