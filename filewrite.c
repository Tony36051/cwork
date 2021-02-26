#include <stdio.h>
#include <string.h>
#include "head.h"

void write(char *fileName, PNode pList)
{
    FILE *fp = NULL;
    fp = fopen(fileName, "w+");
    PNode tmp = pList;
    while (tmp->_PNext ) // 类似遍历，写入文件
    {
        fprintf(fp, "%s,%d\n", tmp->_PNext->_data.name, tmp->_PNext->_data.totalcount);
        tmp = tmp->_PNext;
    }
    fclose(fp);
}