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

}

void DoublyCl::Display()
{

}

int DoublyCl::Count()
{
    return iCount;
}

void DoublyCl::InsertFirst(int No)
{

}

void DoublyCl::InsertLast(int No)
{

}

void DoublyCl::InsertAtPos(int No , int iPOs)
{

}

void DoublyCl::DeleteFirst()
{

}

void DoublyCl::DeleteLast()
{
}

void DoublyCl::DeleteAtPos(int iPos)
{
}

int main()
{
    DoublyCl obj;

    return 0;
}