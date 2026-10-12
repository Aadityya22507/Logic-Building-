import java.util.*;

class program208 {
    public static int differecce(int iNo) {
        int iCnt = 0, iSumf = 0, iSumN = 0;

        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            if ((iNo % iCnt) == 0) {
                iSumf = iSumf + iCnt;
            } else {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN - iSumf;

    }

    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the number:");
        iValue = sobj.nextInt();

        iRet = differecce(iValue);

        System.out.println("Summation of factors is :" + iRet);

    }
}