class solution{
    int  reverse(int n){
        int num=n;
        int r=0;
        while(num>0){
            r=r*10+num%10;
            num/=10;
        }
        return r;
    }
    int isPalindrome(int num){
        int n=reverse(num);
        if(n==num)return 1;
        return 0;
    }
}
public class checkpalindrome{
    public static void main(String[] args){
    solution s=new solution();
    System.out.println(s.isPalindrome(121));
    }

}