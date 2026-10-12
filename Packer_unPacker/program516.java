import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

class program516 
{

    public static void main(String Arg[]) throws Exception 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------Marvellous packer unpacker CUI model");

        System.out.println("Enter the source file name :");
        String Source = sobj.nextLine();

        System.out.println("Enter the Destination file name :");
        String Destination = sobj.nextLine();

        File Sourceobj = new File(Source);

        if(Sourceobj.exists())
        {
            File Destobj = new File(Destination);

            boolean bRet = Destobj.createNewFile();
            if(bRet == false)
            {
                System.out.println("Unable to creatr new file");
                return;
            }

            FileInputStream fiobj = new FileInputStream(Sourceobj);
            FileInputStream foobj = new FileOutputStream(Destobj);

            
        }
        else
        {
            System.out.println("unable to complete as source file");
        }
        
    }
}