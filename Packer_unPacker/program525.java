import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

class program519 {

    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter the name of Directory that you want to open: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if (fobj.exists()) {
            File Arr[] = fobj.listFiles();

            System.out.println("Number of file in directory are :" + Arr.length);

            String Header = Arr[0].getName();
            Header = Header + " " + Arr[0].length();

            System.out.println("Header of First file is :");
            System.out.println(Header);

            System.out.println("Lenght of header is " + Header.length());

            int i = 0;

            for (i = Header.length(); i < 100; i++) {
                Header = Header + " ";
            }
            System.out.println("Header of First file after updation is :");
            System.out.println(Header);

            System.out.println("Lenght of header after updation is :" + Header.length());

        } else {
            System.out.println("There is not such Directory");
        }

    }
}