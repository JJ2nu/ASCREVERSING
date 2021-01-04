#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
      
      char overflowme[12];
      int key = 0xdeadbeef;
      int nah = 0xdeadbeef; 
   printf("overflow me : ");
   gets(overflowme);   // smash me!
   printf("%x\n",nah);
   printf("%x\n",key);
   if(key != 0xdeadbeef){
      printf("flag: HNY2021\n");
   }
   else{
      printf("Nah..\n");
   }

   return 0;
}
