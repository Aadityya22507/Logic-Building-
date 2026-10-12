import java.util.*;

class program605 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringBuffer sb = new StringBuffer(str);

        sb = sb.reverse();

        System.out.println(" reverse string is  : " + sb);
    }
}