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
        System.out.println(EID + "\t" + Ename + "\t" + EAddress + "\t" + ESalary);

    }
}

class MarvellousDBMS {
    public LinkedList<Employee> lobj;

    public MarvellousDBMS() {
        System.out.println("Marvellous DBMS started succesfully ....");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize() {
        System.out.println("Deallocating all resources of DBMS");
        lobj = null;
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
        Employee temp = lobj.get(0);

        int iMin = temp.ESalary;

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

class program665 {
    public static void main(String are[]) throws Exception {
        System.out.println("----------Marvellous Database Management System------------");

        Scanner sobj = new Scanner(System.in);

        MarvellousDBMS mobj = new MarvellousDBMS();

        int iOption = 0;
        String Name;
        String Address;
        int Salary;

        int EID;

        Employee eobj = null;

        while (true) {
            System.out.println("----------------------------------------------------------");
            System.out.println("Please select your choice base on your requirment :");
            System.out.println("----------------------------------------------------------");

            System.out.println("1 : Insert new record into the table ");
            System.out.println("2 : Display all records");
            System.out.println("3 : Display all records having specific EID");
            System.out.println("4 : Display all records having specific Name.");
            System.out.println("5 : Delete  records having specific EID");
            System.out.println("6 : delete records having specific Name.");
            System.out.println("7 : Display sum of all salary.");
            System.out.println("8 : Display Avg of all salary..");
            System.out.println("9 : display Min of all salary..");
            System.out.println("10 : display Max of all salary..");
            System.out.println("11 : display Count of all salary.");
            System.out.println("12 : display Help");
            System.out.println("13 : display about");

            System.out.println("14 : Terminate the DBMS");

            iOption = sobj.nextInt();

            switch (iOption) {
                case 1:
                    System.out.println("Pleadse enter the information of the employees :");

                    System.out.println("Pleadse enter the employees name:  ");
                    sobj.nextLine();
                    Name = sobj.nextLine();

                    System.out.println("Pleadse enter the employees Address:  ");
                    Address = sobj.nextLine();

                    System.out.println("Pleadse enter the employees Salary:  ");
                    Salary = sobj.nextInt();

                    mobj.InsertIntoTable(Name, Address, Salary);
                    break;

                case 2:
                    mobj.SelectStar();
                    break;
                case 3:
                    System.out.println("Please enter the employee ID whose information that you want to display :");

                    EID = sobj.nextInt();

                    mobj.SelectSpecific(EID);
                case 4:
                    System.out.println("Please enter the employee Name whose information that you want to display :");
                    sobj.nextLine();
                    Name = sobj.nextLine();

                    mobj.SelectSpecific(Name);
                case 5:
                    System.out.println("Please enter the employee ID whose information that you want to delete :");

                    EID = sobj.nextInt();

                    mobj.DeleteFrom(EID);
                case 6:
                    System.out.println("Please enter the employee Name whose information that you want to delete :");
                    sobj.nextLine();
                    Name = sobj.nextLine();

                    mobj.DeleteFrom(Name);
                case 7:
                    mobj.AggregatSum();

                    break;
                case 8:
                    mobj.AggregatAvg();

                    break;
                case 9:
                    mobj.AggregatMin();

                    break;
                case 10:
                    mobj.AggregatMax();

                    break;
                case 11:
                    mobj.Aggregatcount();

                    break;
                case 12:
                    System.out.println("This project implements DBME empolyee record :");
                    System.out.println("We implement all sql querry");
                    System.out.println("All data gets stored in DS");
                    System.out.println("Complete implemenrataion");
                    break;

                case 13:
                    System.out.println("This project developed ny Aaditya Naik :");
                    System.out.println("All copyright reserved...");

                    break;
                case 14:
                    System.out.println("Thank you for using the Marvellous DBMS");
                    mobj = null;

                    System.gc();

                    System.exit(0);

            }
        }
    }
}