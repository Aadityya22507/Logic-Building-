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
            int i = 0;

            for (i = 0; i < Arr.length; i++) {
                System.out.println(Arr[i].getName());
            }
        } else {
            System.out.println("There is not such Directory");
        }

    }
}