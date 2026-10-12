import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

class program513 {

    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter File name that you want to open for writting :");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if (fobj.exists()) {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Arr[] = new byte[1024];
            int iRet = 0;
            String str = null;

            while ((iRet = fiobj.read(Arr)) != -1) {
                str = new String(Arr);
                System.out.println(str);
            }

        } else {
            System.out.println("There is no such file ");
        }
    }
}