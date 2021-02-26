#define LENGTH 30
typedef struct User_login
{
    char name[LENGTH];
    int totalcount;
}SDataType;
typedef struct SListNode
{
    SDataType _data;
    struct SListNode* _PNext;
}Node, *PNode;

void bubbleSort(PNode pList);
void heapSort(PNode pList);
void radixSort(PNode pList);
void quickSort(PNode pList);

void addNode(PNode pList, SDataType user_login);
void travelList(PNode pList);
int lessThan(PNode p, PNode q);
void swapData(PNode pList, PNode p, PNode q);
void merge(PNode pList);
int listLen(PNode pList);
SDataType* toArray(PNode pList);


void read(char *fileName, PNode pList);
void write(char *fileName, PNode pList);

PNode createList();
