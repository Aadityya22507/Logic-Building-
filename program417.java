class program415 {
    public static void main(String arg[]) {
        DoublCL obj = new DoublCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of element are :"+iRet);
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

    public void InsertFirst(int No) 
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First.prev = newn;
            First = newn;
        }
        Last.next = First;
        First.prev = Last;

        iCount++;

    }

    public void Display() 
    {
        if(First == null && Last == null)
        {
            System.out.println("LL is empty");
            return;
        }

        System.out.println("Elements of the linkedlist are: ");
        
        do
        {
            System.out.print("| "+First.data+" |<->");
            First = First.next;
        } while (First != Last.next);

        System.out.println();
    }

    public void InsertLast(int No) 
    {
        node newn = null;

        newn = new node(No);

        if (First == null && Last == null) {
            First = newn;
            Last = newn;
        } else 
        {
            Last.next = newn;
            newn.prev = Last;

            Last = newn;
        }
        Last.next = First;
        First.prev = Last;

        iCount++;
    }

    public int Count() {
        return iCount;
    }

    public void DeleteFirst() 
    {
        if(First == null && Last == null)
        {
            return;
        }
        else if(First.next == Last)
        {
            First = null;
            Last = null;
        }
        else
        {
            First = First.next;
            Last.next = null;
        }
        Last.next = First;
        First.prev = Last;
    }

    public void DeleteLast() {

    }

    public void InsertAtPos(int No, int iPos) {

    }

    public void DeleteAtPos(int iPos) {

    }
}
