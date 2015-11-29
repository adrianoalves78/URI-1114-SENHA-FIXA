#include <stdio.h>
   
int main() {
   
int a; // comando onde repesenta a variavel a
scanf("%d", &a); // comando para armazenar a variavel
while(a != 2002){ // comando para repetir um determinado trecho enquanto a condicao for verdadeira
printf("Senha Invalida\n");
scanf("%d",&a);
}
if(a == 2002) // comando te o objetivo de executar todo o codigo, desde de que o resultado seja verdadeiro
printf("Acesso Permitido\n");
  
    return 0;
}
