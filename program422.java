class program419 {
    public static void main(String arg[]) {
        Queue obj = new Queue();
        int iRet = 0;

        obj.Enqueue(10);
        obj.Enqueue(20);
        obj.Enqueue(30);
        obj.Enqueue(40);

        obj.Display();

        iRet = obj.Dequeue();
        System.out.println("Removed elemente is :" + iRet);
        
        obj.Display();

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

class Queue {
    public node First;
    public node Last;
    public int iCount;

    public Queue() {
        System.out.println("Object of Queue gats created succesfully");
        First = null;
        Last = null;
        iCount = 0;
    }

    public void Enqueue(int No) 
    {
        node newn = new node(No);

        if (First == null) 
        {
            First = newn;
        } 
        else 
        {
            node temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;

        }
        iCount++;
    }

    public int Dequeue() 
    {
        int iValue = 0;

        if (First == null) 
        {
            System.out.println("Stack is empty");
            return -1;
        } else 
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

        while (temp != null) 
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
