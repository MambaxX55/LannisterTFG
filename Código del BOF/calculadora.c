#include <stdio.h>
#include <stdlib.h>

void TywinLannister() {
    printf("Atención: la casa siempre tiene los poderes máximos.\n");
    printf("jhtg:apccxhitg ephh:dntBxGjvxsd123\n");
    printf("Jaime tiene la respuesta\n");
}

void calculadora() {
    char operacion[64];  
    int num1, num2;
    
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    
    printf("Introduce la operación (+, -, *, /): ");
    getchar();  
    gets(operacion);  

    switch(operacion[0]) {
        case '+': printf("Resultado: %d\n", num1 + num2); break;
        case '-': printf("Resultado: %d\n", num1 - num2); break;
        case '*': printf("Resultado: %d\n", num1 * num2); break;
        case '/': 
            if (num2 != 0) 
                printf("Resultado: %d\n", num1 / num2);
            else 
                printf("Error: División por cero.\n");
            break;
        default: 
            printf("Operador no válido.\n");
    }
}

int main() {
    calculadora();
    return 0;
}