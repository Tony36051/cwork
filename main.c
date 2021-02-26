#include <stdio.h>
#include "head.h"

int main()
{
    printf("hello world\n");
    char *inputPath = "D:\\git\\gif-fixed-size-compressor\\cwork\\user_login-sample.txt";
    inputPath = "D:\\git\\gif-fixed-size-compressor\\cwork\\user_login.txt";
    char *outPath = "D:\\git\\gif-fixed-size-compressor\\cwork\\user_login-out.txt";

    PNode pList = createList();
    read(inputPath, pList);
    printf("Read done\n");
    merge(pList);
    printf("Merge done:\n");
    write(outPath, pList);

    char *sortedPath = "D:\\git\\gif-fixed-size-compressor\\cwork\\result.txt";
    // bubbleSort(pList);
    // quickSort(pList);
    // heapSort(pList);
    radixSort(pList);
    printf("Sort done\n");
    write(sortedPath, pList);
    return 0;
}