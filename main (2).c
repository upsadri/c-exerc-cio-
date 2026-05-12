#include <stdio.h>

int main (){
    float a, b, resultado;
    int opcao;
   
    ///menu
    
    printf ("====menu====\n");
    printf ("soma\n");
    printf ("subtracao\n");
    printf ("multiplicacao\n");
    printf("divisao\n");
    
     printf ("digite seu primeiro numero");
    scanf ("%f", &a);
    
    printf ("digite seu segundo numero");
    scanf ("%f", &b);
    ////leia
    
    if (opcao == 1){
        resultado = a + b;
        printf("resultado %f", resultado);
    }
    else if (opcao == 2){
        
    }
    
    return 0;
}  