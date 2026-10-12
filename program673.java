import java.util.*;

class program673 
{
    public static void main(String are[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        System.out.println(str);
    }
}