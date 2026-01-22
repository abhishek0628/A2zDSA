class solution{
    int hcf(int a,int b){
        int min=a>b?b:a;
        for(int i=min;i>=1;i--){
            if(a%i==0&& b%i==0){
                return i;
            }
        }
        return 1;
    }
}
public class hcf{
    public static void main(String[]args){
        solution s=new solution();
        System.out.println(s.hcf(40,12));
    }
}