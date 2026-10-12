import java.util.*;

class program261 
{
    public static void main(String arg[]) 
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        int i = 0;
        System.out.println("Array lenght is :" + Arr.length);
        System.out.println("String lenght is :" + name.length());
    }
}