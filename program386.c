#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }

    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }

    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{
    if ((First == NULL) && (Last == NULL))
    {
        printf("LL is empty\n");
        return;
    }

    do
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    } while ((First != Last->next));

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    if ((First == NULL) && (Last == NULL))
    {
        printf("LL is empty\n");
        return 0;
    }

    do
    {
        iCnt++;
        First = First->next;
    } while ((First != Last->next));

    printf("\n");

    return iCnt;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if ((*First == NULL) && (*Last == NULL)) // empty LL
    {
        return;
    }
    else if (*First == *Last) // Single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else // more than one node
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;

    if ((*First == NULL) && (*Last == NULL)) // empty LL
    {
        return;
    }
    else if (*First == *Last) // Single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else // more than one node
    {
        temp = *First;
        while (temp->next != *Last)
        {
            temp = temp->next;
        }
        free(*Last);
        *Last = temp;
        temp->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    int i = 0;
    int iLenght = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    iLenght = Count(*First, *Last);

    if ((iPos < 1) || (iPos > iLenght + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if (iPos == iLenght + 1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        temp = *First;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for (i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
    int i = 0;
    int iLenght = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    iLenght = Count(*First, *Last);

    if ((iPos < 1) || (iPos > iLenght))
    {
        printf("Invalid Position\n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if (iPos == iLenght)
    {
        DeleteLast(First, Last);
    }
    else
    {
        temp1 = *First;

        for (i = 1; i < iPos; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;

        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);

    iRet = Count(Head, Tail);

    printf("Number of elements are :%d\n", iRet);

    InsertAtPos(&Head, &Tail, 105, 5);

    Display(Head, Tail);

    iRet = Count(Head, Tail);

    printf("Number of elements are :%d\n", iRet);

    DeleteAtPos(&Head, &Tail, 5);

    Display(Head, Tail);

    iRet = Count(Head, Tail);

    printf("Number of elements are :%d\n", iRet);

    return 0;
}