#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
   char overflowme[12];
   int key = 0x00;
   printf("overflow me : ");
   gets(overflowme);   // smash me!
   printf("overflowme = %s\n",overflowme);
   printf("key = %#x\n",key);
   if(key == 0x574C464F)
   {
      //flag was here...
   }
   else{
      printf("Nah..\n");
   }

   return 0;
}

