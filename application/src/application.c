#include <stdlib.h>
#include <stdio.h>
#include "../include/application.h"

int main(int args, char *argc[])
{
    if (args > 0)
    {
        for (size_t i = 0; i < args; i++)
        {
            printf("\tindex:%d, argc:%s\n", i, argc[i]);
        }        
    }
    else
    {
        printf("\thello world\n");
    }

    return 0;
}