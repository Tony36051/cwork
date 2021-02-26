#include <stdio.h>
#include "head.h"
#include <string.h>
#include <stdlib.h>

#define MAX_LINE 1024
const int MAXS = 1 * 1024 * 1024;

void cutStr(char *str, char c)
{
    int N = strlen(str);
    int i;
    for (i = 0; i < N; i++)
    {
        if (str[i] == c)
        {
            str[i] = '\0';
            break;
        }
    }
}

void read(char *fileName, PNode pList)
{
    FILE *fp;
    char strLine[MAX_LINE];                  //读取缓冲区
    if ((fp = fopen(fileName, "r")) == NULL) //判断文件是否存在及可读
    {
        printf("Open Falied!");
    }
    void *ret;
    while (1)
    {
        ret = fgets(strLine, MAX_LINE, fp); //将fp所指向的文件一行内容读到strLine缓冲区
        if (ret == NULL)
            break; // 正确地退出
        cutStr(strLine, ',');
        SDataType *userLogin = (SDataType *)malloc(sizeof(SDataType));
        strcpy(userLogin->name, strLine);
        userLogin->totalcount = 1;
        addNode(pList, *userLogin);
    }
    // travelList(pList);
    fclose(fp); //关闭文件
}

