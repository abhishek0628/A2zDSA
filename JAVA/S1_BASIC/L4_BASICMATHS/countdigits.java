
class solution{
    int countdigit(int num){
        int count=0;
        while(num>0){
            count++;
            num/=10;
        }
        return count;
    }
}
public class countdigits{
    public static void main(String[] args){
        solution s=new solution();
        System.out.println(s.countdigit(2345));
    }

}