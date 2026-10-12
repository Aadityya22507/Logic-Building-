#include <iostream>
using namespace std;
// SC

template <class T>
struct nodeSC
{
    int data;
    struct nodeSC *next;
};

template <class T>
class SinglyCL
{
private:
    struct nodeSC<T> *First;
    struct nodeSC<T> *Last;
    int iCount;

public:
    SinglyCL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    if ((First == NULL) && (Last == NULL))
    {
        printf("LinkedList is empty\n");
        return;
    }

    do
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    } while (First != Last->next);

    printf("\n");
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSC<T> *newn = NULL;

    newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    (Last)->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSC<T> *newn = NULL;

    newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {

        (Last)->next = newn;
        Last = newn;
    }
    (Last)->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    int i = 0;
    int iLength = 0;
    struct nodeSC<T> *temp = NULL;
    struct nodeSC<T> *newn = NULL;

    iLength = Count();

    if ((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == iLength + 1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        newn = new nodeSC<T>;
        newn->data = No;
        newn->next = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if ((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if (First == Last) // Single node
    {
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = (First)->next;
        delete ((Last)->next);
        (Last)->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct nodeSC<T> *temp = NULL;

    if ((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if (First == Last) // Single node
    {
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else // More than one node
    {
        temp = First;

        while (temp->next != Last)
        {
            temp = temp->next;
        }

        delete (Last);
        Last = temp;

        (Last)->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    int iLength = 0;
    struct nodeSC<T> *temp1 = NULL;
    struct nodeSC<T> *temp2 = NULL;

    iLength = Count();

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iLength)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for (i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete (temp2);
    }
    iCount--;
}

int main()
{
    SinglyCL<int> *iobj = new SinglyCL<int>();
    int iRet = 0;

    iobj->InsertFirst(31);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->InsertLast(41);
    iobj->InsertLast(51);
    iobj->InsertLast(61);
    iobj->InsertLast(81);
    iobj->InsertLast(91);
    iobj->InsertLast(101);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->InsertAtPos(86, 8);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->DeleteFirst();

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->DeleteLast();

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    iobj->DeleteAtPos(7);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of elemensts are : " << iRet << endl;

    return 0;
}
