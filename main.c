/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i, numero;
   printf("numeros pares de 1 a 20\n");
   for(i=1; i<= 20; i++){
       if(i % 2 == 0){
           printf("%d\n", i);
       }
   }
   printf ("===conta==\n");
   printf ("digite um numero");
   scanf ("%d", &numero);
   for (int c = 0; c <= 10; c++){
       printf ("%d * %d = %d\n", numero, c, numero * c);
   }
   return 0;
}
