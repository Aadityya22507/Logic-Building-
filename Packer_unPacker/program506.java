import java.io.*;
import java.util.*;

class program506 
{

    public static void main(String Arg[]) throws Exception 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter File name that you want to open :");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if (fobj.exists()) 
        {
            System.out.println("File is present in the floder ");
        } 
        else 
        {
            System.out.println("There is no such file ");
        }
    }
}