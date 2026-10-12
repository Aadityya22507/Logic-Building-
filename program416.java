class program415 
{
    public static void main(String arg[]) 
    {
        DoublCL obj = new DoublCL();
    }
}

    class node {
        public int data;
        public node next;
        public node prev;

        public node(int iValue) {
            data = iValue;
            next = null;
            prev = null;
        }
    }

    class DoublCL {
        public node First;
        public node Last;
        public int iCount;

        public DoublCL() {
            System.out.println("Object of DoublyCl gats created succesfully");
            First = null;
            Last = null;
            iCount = 0;
        }

        public void InsertFirst(int No) {

        }

        public void Display() {
            System.out.println("Elements of the linkedlist are: ");
            node temp = null;

            while (temp != null) {
                System.out.print("|" + temp.data + "|->");
                temp = temp.next;
            }
            System.out.println("null");
        }

        public void InsertLast(int No) {

        }

        public int Count() {
            return iCount;
        }

        public void DeleteFirst() {

        }

        public void DeleteLast() {

        }

        public void InsertAtPos(int No, int iPos) {

        }

        public void DeleteAtPos(int iPos) {

        }
    }

