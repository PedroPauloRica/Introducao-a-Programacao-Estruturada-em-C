#include <stdio.h>
int main() {
 int idade;
 printf("Digite a idade: ");
 scanf("%d", &idade);
 if (idade >= 18 && idade <= 30) {
 printf("Esta entre 18 e 30 anos\n");
 } else {
 printf("Fora da faixa\n");
 }
 return 0;
}
�
