import java.util.*;

class program262 
{
    public static int count(String str)
    {
        char Arr[] = str.toCharArray();//imp
        int i = 0, iCnt = 0;
        
        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    public static void main(String arg[]) 
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        int iRet = 0;
        iRet = count(name);

        System.out.println("Name of captial character are "+iRet);
    }
}