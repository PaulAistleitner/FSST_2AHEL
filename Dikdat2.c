#include <stdio.h>

int leet(char* wort)
{
    int let = 0;
    for (int i = 0; wort[i] != '\n'; i++)
    {
        if (wort[i] == 'e')
        {
            wort[i] == '3';
            let++;
        }
    }
    return let;
}

int main(int argc ,char* argv[])
{
    if (argc ==1)
    {

    }
    else
    {
        printf("Usage: Dikdat2 <Wort>");
    }

    return 0;
}