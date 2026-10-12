import java.util.*;

class Employee {
    public int EID;
    public String Ename;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static {
        Counter = 0;
    }

    public Employee(String B, String C, int D) {
        this.EID = ++Counter;
        this.Ename = B;
        this.EAddress = C;
        this.ESalary = D;
    }

    void DisplayInfo() {
        System.out
                .println(EID + "\t" + Ename + "\t" + EAddress + "\t" + ESalary);

    }
}

class MarvellousDBMS {
    public LinkedList<Employee> lobj;

    public MarvellousDBMS() {
        System.out.println("Marvellous DBMS started succesfully ....");
        lobj = new LinkedList<Employee>();
    }

    public void InsertIntoTable(String name, String Address, int Salary) {
        Employee eobj = new Employee(name, Address, Salary);
        lobj.add(eobj);
    }

    public void SelectStar() {
        System.out.println("Data from the Emplotee Database : ");

        System.out.println("---------------------------------------------------------");
        System.out.println("EID\tEname\t\tEAddress\t\tESalary");
        System.out.println("---------------------------------------------------------");
        for (Employee eref : lobj) {
            eref.DisplayInfo();
        }
        System.out.println("---------------------------------------------------------");
    }

    public void SelectSpecific(int ID) {
        System.out.println("Information of employes whose EID is :" + ID);

        for (Employee eref : lobj) {
            if (eref.EID == ID) {
                eref.DisplayInfo();
                break;
            }
        }
    }

    public void SelectSpecific(String Name) {
        System.out.println("Information of employes whose Name is :" + Name);

        for (Employee eref : lobj) {
            if (Name.equals(eref.Ename)) {
                eref.DisplayInfo();
            }
        }
    }

    public void DeleteFrom(int ID) {
        int index = 0;
        boolean bFlag = false;

        for (Employee eref : lobj) {
            if (eref.EID == ID) {
                bFlag = true;
                break;
            }
            index++;
        }

        if (bFlag == false) {
            System.out.println("Unable to delete the element.");
        } else {
            lobj.remove(index);
        }

    }

    public void DeleteFrom(String Name) {
        int index = 0;
        boolean bFlag = false;

        for (Employee eref : lobj) {
            if (Name.equals(eref.Ename)) {
                bFlag = true;
                break;
            }
            index++;
        }

        if (bFlag == false) {
            System.out.println("Unable to delete the element.");
        } else {
            lobj.remove(index);
        }

    }

    public void AggregatSum() {
        int iSum = 0;

        for (Employee eref : lobj) {
            iSum = iSum + eref.ESalary;
        }

        System.out.println("Summation of salary : " + iSum);
    }

    public void AggregatMax() {
        int iMax = 0;

        for (Employee eref : lobj) {
            if (eref.ESalary > iMax) {
                iMax = eref.ESalary;
            }
        }

        System.out.println("Maximum of salary : " + iMax);
    }

    public void AggregatMin() {
        int iMin = 0;

        for (Employee eref : lobj) {
            if (eref.ESalary < iMin) {
                iMin = eref.ESalary;
            }
        }

        System.out.println("Minmum of salary : " + iMin);
    }

    public void AggregatAvg() {
        int iSum = 0;

        for (Employee eref : lobj) {
            iSum = iSum + eref.ESalary;
        }

        System.out.println("Average of salary : " + (iSum / lobj.size()));
    }

    public void Aggregatcount() {
        System.out.println("Number of employess : " + lobj.size());
    }
}

class program663 {
    public static void main(String are[]) {
        System.out.println("----------Marvellous Database Management System------------");

        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("Sagar kulkarni", " Karve Road Pune 4", 11000);
        mobj.InsertIntoTable("Gaurav Sharam", "SB Road kashi", 21000);
        mobj.InsertIntoTable("Chinmayee Patil", "LB road Mumbai", 20000);
        mobj.InsertIntoTable("Akask Sudame", " FC road Satara", 25000);
        mobj.InsertIntoTable("Mansi Joshi", "Panchavati Nasik", 12000);

        mobj.SelectStar();

        mobj.SelectSpecific(4);

        mobj.SelectSpecific("Chinmayee Patil");

        mobj.DeleteFrom(4);

        mobj.SelectStar();

        mobj.DeleteFrom("Gaurav Sharam");

        mobj.SelectStar();

        mobj.AggregatSum();

        mobj.Aggregatcount();

        mobj.AggregatMax();

        mobj.AggregatMin();

        mobj.AggregatAvg();
    }
}