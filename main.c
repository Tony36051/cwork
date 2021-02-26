#include <stdio.h>
#include "head.h"

int main()
{
    printf("hello world\n");
    char *inputPath = "D:\\git\\cwork\\user_login.txt";
    char *outPath = "D:\\git\\cwork\\user_login-out.txt";
    char *sortedPath = "D:\\git\\cwork\\result.txt";

    PNode pList = createList();
    read(inputPath, pList);
    printf("Read done\n");
    merge(pList);
    printf("Merge done:\n");
    write(outPath, pList);

    // bubbleSort(pList);
    // quickSort(pList);
    heapSort(pList);
    // radixSort(pList);
    printf("Sort done\n");
    write(sortedPath, pList);
    deleteList(pList);
    return 0;
}