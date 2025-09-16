
import java.util.*;

class MyString {  // Avoid naming class 'string' (conflicts with java.lang.String)
    
    int isPalindrome(String str, int start, int end) {
        if (start >= end) return 1;
        if (str.charAt(start) != str.charAt(end)) return 0;
        return isPalindrome(str, start + 1, end - 1);
    }

    void reverse(StringBuilder strr, int start, int end) {
        if (start >= end) return;

        // Swap characters
        char t = strr.charAt(start);
        strr.setCharAt(start, strr.charAt(end));
        strr.setCharAt(end, t);

        reverse(strr, start + 1, end - 1);
    }
}

public class str {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = str.length();

        MyString s = new MyString();

        int r = s.isPalindrome(str, 0, n - 1);
        if (r == 0) System.out.println("no");
        else System.out.println("yes");

        StringBuilder sb = new StringBuilder(str);
        s.reverse(sb, 0, sb.length() - 1);
        System.out.println(sb.toString());
    }
}
