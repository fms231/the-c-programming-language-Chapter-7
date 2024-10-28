#include <stdio.h>
#include <stdlib.h>

// 节省时间，但消耗空间
#define is_upper(c) ((c >= 'A' && c <= 'Z') ? 1 : 0)

// 节省空间，但消耗时间
int is_upper_v1(int c);

int main(int argc, char *argv[])
{
    int c = 'A';
    scanf("%c", &c);
    if (is_upper(c))
    {
        puts("is_upper_v1: This letter is uppercase.");
    }
    else
    {
        puts("is_upper_v1: This letter is lowercase.");
    }

    if (is_upper_v1(c))
    {
        puts("is_upper_v2: This letter is uppercase.");
    }
    else
    {
        puts("is_upper_v2: This letter is lowercase.");
    }

    exit(EXIT_SUCCESS);
}

int is_upper_v1(int c)
{
    return (c >= 'A' && c <= 'Z');
}