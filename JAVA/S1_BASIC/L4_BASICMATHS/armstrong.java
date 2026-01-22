
class solution{
    int countdigit(int num){
        int count=0;
        int n=num;
        while(n>0){
            count++;
            n/=10;
        }
        return count;
        
    }
    int armstrong(int num){
        int n=countdigit(num);
        int n2=num;
        int sum=0;
        while(n2>0){
            sum+=Math.pow((n2%10),n);
            n2/=10;

        }
        if(sum==num)return 1;
        return 0;
    }
}
public class armstrong{
    public static void main(String[] args){
        solution s=new solution();
        System.out.println(s.armstrong(103));
    }
}