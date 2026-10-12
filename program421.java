class program419 {
    public static void main(String arg[]) 
    {
        Stack obj = new Stack();
        int iRet = 0;

        obj.Puch(10);
        obj.Puch(20);
        obj.Puch(30);
        obj.Puch(40);

    }
}

class node 
{
    public int data;
    public node next;

    public node(int iValue) 
    {
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

    public void Puch(int No) 
    {
        node newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public int Pop() 
    {
        int iValue = 0;

        if (First == null)
        {
            System.out.println("Stack is empty");
            return -1;
        }
        else
        {
            iValue = First.data;
            First = First.next;
        }
        iCount--;
        return 0;
    }

    public void Display() 
    {
        System.out.println("Elements of stack are :");

        node temp = First;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public int Count() 
    {
        return iCount;
    }

}
