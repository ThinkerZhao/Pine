#include <stdlib.h>
#include <stdio.h>
#include "base64.h"
#include "shell.h"
#include "multi_button.h"


int main(int args, char *argc[])
{
    if (args > 0)
    {
        for (size_t i = 0; i < args; i++)
        {
            #ifndef PROJECT_APP
            printf("\tindex:%d, argc:%s\n", i, argc[i]);
            #else
            printf("\tindex:%d, argc:%d\n", i, args);
            #endif
        }        
    }
    else
    {
        printf("\thello world\n");
    }

    return 0;
}