#include<stdio.h>
#include <stdlib.h>
#include <string.h>


char *Substring(char *dst, char *src, size_t inicio, size_t fim)
{
    return strncpy(dst, src + inicio, fim);
}

char definircartao(char* numero){

  char* credito = malloc(strlen(numero));
  int  i, total, contador;
  long a, b;

  for(i = 14; i >= 0;  i-2){
    strncpy(numero, credito, i);
    a = atoi(numero);
    total += (a * 2);  
  }

  for(i = 15; i >= 1; i-2){
    strncpy(numero, credito, i);
    b += atoi(numero);
  }
  
  return total + b;
  
}

int main(void) {

  char *credito [16];
  int num, primeiro_digito;
  
  printf("Digite o Número do Cartão\n");
  scanf("%s", credito);

  primeiro_digito = Substring(num,credito, 0, 1);

  //num = definircartao(*credito);

  if(num)

  printf("O cartão: %s", credito);
  
  return 0;
}
