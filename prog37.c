#include <stdio.h>

int main(int argc, char *argv[]){
   FILE *ent=fopen(*++argv, "r");
   char pal[30], pal2[30];
   int i;
   for(i=1; i<=3;i++){
   fscanf(ent, "%s %s\n", pal, pal2); //lee de otro archivo
   printf("%s %s\n", pal, pal2);
   }
   
   fclose(ent);

return 0;
}
