#include <stdio.h>

int main (){
    float a, b, resultado;
    int opcao;
   
    ///menu
    
    printf ("====CALCULADORA====\n");
    printf ("1- soma\n");
    printf ("2- subtracao\n");
    printf ("3- multiplicacao\n");
    printf("4- divisao\n");
    
    printf ("Escolha a opcao");
    scanf ("%d", &opcao);
    
     printf ("digite seu primeiro numero");
    scanf ("%f", &a);
    
    printf ("digite seu segundo numero");
    scanf ("%f", &b);
    ////leia
    
    if (opcao == 1){
        resultado = a + b;
        printf("resultado = %.2f", resultado);
    }
    else if (opcao == 2){
        resultado = a-b;
        printf("resultado = %.2f", resultado);
        
    }
    else if (opcao = 3){
        resultado = a * b;
        printf("resultado = %.2f", resultado);
    }
    else if (opcao = 4){
        if (b != 0){
            resultado = a / b;
            printf("resultado = %.2f", resultado);
        } else{
            printf("numero divido por 0 = erro");
        }
    } else {
        printf("operacao invalida");
    }
    
    return 0;
}  
