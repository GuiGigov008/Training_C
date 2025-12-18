#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char string[256];

int number = 0;
int virgulaFloat = 2;
int virgulaDouble = 2;
float decimal = 0.0f;
double largeDecimal = 0.0;
char character = ' ';
string text = "";

int main() {
    printf("VARIAVEIS ANTES DA ENTRADA\n\n");
    printf("Esta eh a variavel 'number': %d\n", number);
    printf("Esta eh a variavel 'decimal': %f\n", decimal);
    printf("Esta eh a variavel 'largeDecimal': %lf\n", largeDecimal);
    printf("Esta eh a variavel 'character': %c\n", character);
    printf("Esta eh a variavel 'text': %s\n", text);

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &number);
    printf("\nDigite um valor decimal (float): ");
    scanf("%f", &decimal);
    printf("    Quantas casas apos a virgula voce quer para o float? ");
    scanf("%d", &virgulaFloat);
    printf("\nDigite um valor decimal grande (double): ");
    scanf("%lf", &largeDecimal);
    printf("    Quantas casas apos a virgula voce quer para o double? ");
    scanf("%d", &virgulaDouble);
    printf("\nDigite um caractere: ");
    scanf(" %c", &character);
    printf("\nDigite uma string (texto): ");
    scanf("%s", text);

    printf("\nVARIAVEIS DEPOIS DA ENTRADA\n\n");
    printf("Esta eh a variavel 'number': %d\n", number);
    printf("Esta eh a variavel 'decimal': %.*f\n", virgulaFloat, decimal);
    printf("Esta eh a variavel 'largeDecimal': %.*lf\n", virgulaDouble, largeDecimal);
    printf("Esta eh a variavel 'character': %c\n", character);
    printf("Esta eh a variavel 'text': %s\n", text);

    system("pause");
    
    return 0;
}