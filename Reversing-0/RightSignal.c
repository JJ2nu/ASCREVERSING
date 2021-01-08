#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
void RightSignalHandler(int signum)
{
    signal(signum,SIG_IGN);
    //flag was here...
    exit(0);
}
int main()
{
    int signalcheck=0;
    printf("signalcheck? : ");
    scanf("%d", &signalcheck);
    if (signalcheck==1)signal(SIGFPE, RightSignalHandler);
    int i, j;
    
    printf("7 / j => flag \n");
    printf("j : ");
    scanf("%d", &j);
    i = 7 / j;
    printf("%d", i);
    return 0;
}
