﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//VALID 表示结果合法
//INVALID 表示结果非法
enum State
{
    VALID,//0
    INVALID//1
};
//默认结果可能非法，当正确转换后再改为合法
enum State state = INVALID;
​
int my_atoi(char* str)
{
    int flag = 1;
    long long ret = 0;
    assert(str);
    state = INVALID;
    //跳过空白字符
    while (isspace(*str))
    {
        str++;
    }
    if (*str == '\0')
    {
        return 0;
    }
    //跳过正负号
    if (*str == '+')
    {
        str++;
    }
    else if (*str == '-')
    {
        flag = -1;
        str++;
    }
    //开始转换数字字符直到非数字字符
    while (isdigit(*str))
    {
        ret = ret * 10 + flag * (*str - '0');
        if ((ret > INT_MAX) || (ret < INT_MIN))
        {
            return 0;
        }
        str++;
    }
    //正常停止
    if (*str == '\0')
    {
        state = VALID;
        return (int)ret;
    }
    else
    {
        //遇到非数字字符
        return (int)ret;
    }
}
​
int main()
{
    char* p = "-1212212121212";
    printf("%d\n", my_atoi(p));
    return 0;
}
