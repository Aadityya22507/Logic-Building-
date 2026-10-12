class program419 {
    public static void main(String arg[]) {
        Stack obj = new Stack();
    }
}

class node {
    public int data;
    public node next;

    public node(int iValue) {
        data = iValue;
        next = null;
    }
}

class Stack {
    public node First;
    public node Last;
    public int iCount;

    public Stack() {
        System.out.println("Object of DoublyCl gats created succesfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void Puch(int No) {

    }

    public int Pop() {
        return 0;
    }

    public void Display() {

    }

    public int Count() {
        return iCount;
    }

}
