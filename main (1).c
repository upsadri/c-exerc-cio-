/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int opcao, numero, resultado;
  while (opcao != 3){
      
      printf("escolha numero");
      scanf("%d", &numero);
      
      printf("===menu==\n");
      printf("numero dobro\n");
      printf("numero quadrado");
      printf("sair\n");
      
      printf("digite a opcao\n");
      scanf("%d", &opcao);
      
      if(opcao == 1){
         resultado = numero * 2;
          break;
      } else if(opcao == 2){
         resultado = numero * numero;
          break;
      } 
      printf("resuldo %d", resultado);
      

  }

    return 0;
}