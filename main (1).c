
#include <stdio.h>

int main()
{
  int opcao = 0, numero, resultado;
 
  while(opcao != 3){
      
     printf("===menu==\n");
      printf("1- numero dobro\n");
      printf("2- numero quadrado\n");
      printf("3- sair\n");
      
      printf("digite a opcao\n");
      scanf("%d", &opcao);
       
       printf("escolha numero");
      scanf("%d", &numero);
     
      if(opcao == 1){
         resultado = numero * 2;
         printf("resuldo %d\n", resultado);
         
      } else if(opcao == 2){
         resultado = numero * numero;
         printf("resuldo %d\n", resultado);
          
      } 
      else{
          printf("Deslogando...");
      }
     
      

  }

    return 0;
}
