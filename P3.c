/* P3.c */
/* Mateus Santos Tornilio Lemos */
/* 11811EEL006 */

#include <stdio.h>

int main(){
   int dec, i=0;
   char bits[256];
   scanf("%s", bits);
   for(;bits[i];i++){
     if(bits[i]>='0'&&bits[i]<='9'){
       dec=dec*10+(bits[i]-'0');
     }
   }
   printf("\"%s\" retorna \"%i\"\n", bits, dec);
   return 0;
}
