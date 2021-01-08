#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encrypt(char* message)
{
    for (int i = 0; i < strlen(message); i++)
    {
        for (int j = 0; j < i; j++)
        {
            message[i] << 1;
            message[i] += 1;
            message[i] ^= 7;
            message[i] ^= 7;
            message[i] >> 1;
        }
    }
    return message;
}

void main()
{
    while (1)
    {
        int option=4;
        char message[20] = "";
        char newmessage[20] = "";
        printf("1. Encryption 2. Find Flag 0. Exit : ");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Message : ");
            scanf("%s", &message);
            printf("encrypted message : %s \n\n", encrypt(message));
        }
        else if (option == 2)
        {
            printf("answer : ");
            scanf("%s", &message);
            if (!strcmp(encrypt(message), "jfplgm")) 
            {
                //flag was here....
            }
            else printf(" Nah...\n\n");
        }
        else if (option == 0)
        {
            exit(0);
        }
        else continue;

    }
}
