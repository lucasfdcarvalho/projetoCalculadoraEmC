#include <stdio.h>

int main(){
    int continuar = 1;
    do{
        int opcao;
        printf("===============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");

        printf("Selecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        if(opcao == 1){
            double num1, num2, resultado;
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 + num2;
            printf("Resultado: %lf + %lf = %lf\n", num1, num2, resultado);
        }else if(opcao == 2){
            double num1, num2, resultado;
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 - num2;
            printf("Resultado: %lf - %lf = %lf\n", num1, num2, resultado);
        }else if(opcao == 3){
            double num1, num2, resultado;
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 * num2;
            printf("Resultado: %lf x %lf = %lf\n", num1, num2, resultado);
        }else if(opcao == 4){
            double num1, num2, resultado;
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
            if(num2 == 0){
                printf("Erro: Divisao por zero não e permitido\n");
            }else{
                resultado = num1 / num2;
                printf("Resultado: %lf / %lf = %lf\n", num1, num2, resultado);
            }
        }else if(opcao == 5){
            printf("Obrigado por usar a calculadora! Ate a proxima\n");
            break;
        }else{
            printf("Insira um numero valido\n");
            continue;
        }
        while(1){
            char letra;
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &letra);
            if(letra == 's' || letra == 'S'){
                break;
            }else if(letra == 'n' || letra == 'N'){
                printf("Obrigado por usar a calculadora! Ate a proxima\n");
                continuar = 0;
                break;
            }else{
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao");
            }
        }
    }while(continuar);
}
