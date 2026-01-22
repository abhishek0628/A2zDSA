class solution{
    int  reverse(int num){
        int r=0;
        while(num>0){
            r=r*10+num%10;
            num/=10;
        }
        return r;
    }
}
public class reversenum{
    public static void main(String[] args){
    solution s=new solution();
    System.out.println(s.reverse(3562));
    }

}