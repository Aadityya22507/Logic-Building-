#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyCl
{
private:
    PNODE First;
    PNODE Last;
    int iCount;

public:
    DoublyCl();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyCl::DoublyCl()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void DoublyCl::Display()
{
    if (First == NULL && Last == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }

    cout << "<=>";
    do
    {
        cout << "|" << First->data << "|<=>";
        First = First->next;
    } while (Last->next != First);

    cout << "\n";
}

int DoublyCl::Count()
{
    return iCount;
}

void DoublyCl::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

void DoublyCl::InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

void DoublyCl::InsertAtPos(int No, int iPOs)
{
}

void DoublyCl::DeleteFirst()
{
    if (First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;

        Last->next = First;
        First->prev = Last;
    }
    iCount--;
}

void DoublyCl::DeleteLast()
{
    if (First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete First->prev;

        Last->next = First;
        First->prev = Last;
    }
    iCount--;
}

void DoublyCl::DeleteAtPos(int iPos)
{
}

int main()
{
    DoublyCl obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of elements are :" << iRet << "\n";

    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout << "Number of elements are :" << iRet << "\n";

    return 0;
}