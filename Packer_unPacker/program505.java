import java.io.*;
import java.util.*;

class program503 {

    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter File name that you want to create :");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        boolean bRet = fobj.createNewFile();

        if (bRet == false) {
            System.out.println("Unable to create file");
        } else {
            System.out.println(" File got created");
        }
    }
}