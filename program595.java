import java.util.*;

class program595 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Word from the string are : ");
        int i = 0;

        for (String s : Arr) // for each loop
        {
            System.out.println(Arr[i]);
        }

    }
}