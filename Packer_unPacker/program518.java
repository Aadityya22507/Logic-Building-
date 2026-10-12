import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

class program516 {

    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter the name of Directory that you want to open: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if (fobj.exists()) {
            System.out.println("Directory is present");
        } else {
            System.out.println("There is not such Directory");
        }

    }
}