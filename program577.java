import java.util.*;

class Matrix {
    public int iRow, iCol;
    public int Arr[][];

    public Matrix(int A, int B) {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data :");

        int i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public int Submmation() {
        int iSum = 0, i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    public int Maximum() {
        int iMax = 1, i = 0, j = 0;

        iMax = Arr[0][0];

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                if (iMax > Arr[i][j]) {
                    iMax = Arr[i][j];
                }
            }
        }

        return iMax;
    }

    public int Minmum() {
        int iMin = 1, i = 0, j = 0;

        iMin = Arr[0][0];

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                if (iMin < Arr[i][j]) {
                    iMin = Arr[i][j];
                }
            }
        }

        return iMin;
    }

    public void RowSum() {
        int iSum = 0, i = 0, j = 0;

        for (i = 0; i < iRow; i++) {
            for (j = 0, iSum = 0; j < iCol; j++) {
                iSum = iSum + Arr[i][j];
            }
        }

        System.out.println("Summation of all elements from rom no :" + iSum);

    }

    public int DiagonalSum() {
        int iSum = 0, i = 0, j = 0;

        if (iRow != iCol) {
            System.out.println("Unable to perform addition.");
            return -1;
        }

        for (i = 0; i < iRow; i++) {
            for (j = 0; j < iCol; j++) {
                if (i == j) {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
}

class program577 {
    public static void main(String arg[]) throws Exception {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int No2 = sobj.nextInt();

        int Arr[][] = new int[No1][No2];

        Matrix mobj = new Matrix(No1, No2);

        mobj.Accept();
        mobj.Display();

        int iRet = 0;

        iRet = mobj.Submmation();

        System.out.println("Submmation is : " + iRet);

        iRet = mobj.Maximum();

        System.out.println("Maximum is : " + iRet);

        iRet = mobj.Minmum();

        System.out.println("Minmum is : " + iRet);

        mobj.RowSum();

        iRet = mobj.DiagonalSum();

        System.out.println("Diagonal Sum is : " + iRet);

        mobj = null;

    }
}