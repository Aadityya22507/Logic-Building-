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
        System.out.println("EID : " + EID + "|Name : " + Ename + "|Address : " + EAddress + "|Salary : " + ESalary);

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
}

class program650 {
    public static void main(String are[]) {
        System.out.println("----------Marvellous Database Management System------------");

        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("Sagar kulkarni", " Karve Road Pune 4", 11000);
        mobj.InsertIntoTable("Gaurav Sharam", "SB Road kashi", 21000);
        mobj.InsertIntoTable("Chinmayee Patil", "LB road Mumbai", 20000);
        mobj.InsertIntoTable("Akask Sudame", " FC road Satara", 25000);
        mobj.InsertIntoTable("MansiJoshi", "Panchavati Nasik", 12000);
    }
}