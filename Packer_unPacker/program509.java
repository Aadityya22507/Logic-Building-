import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

class program509 {

    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter File name that you want to open for writting :");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if (fobj.exists()) {
            FileOutputStream foobj = new FileOutputStream(fobj);

            String str = "Marvellous";
            byte Arr[] = str.getBytes();
            foobj.write(Arr);
        } else {
            System.out.println("There is no such file ");
        }
    }
}