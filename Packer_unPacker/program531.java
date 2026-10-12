import java.io.*;
import java.util.*;

class program531 {

    public static void main(String Arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter the name of Packed file that you want to open: ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);

        if (!fobj.exists()) {
            System.out.println("Unable to proceed as packed file is missing....");
            return;
        }
    }
}