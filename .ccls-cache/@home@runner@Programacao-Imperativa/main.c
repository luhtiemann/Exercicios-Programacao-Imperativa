/*
//Primerio código
#include <stdio.h>
int main()
{
  char nome[23];
  puts("Entre com um nome e tecle entre: ");
  gets(nome);
  puts("O nome e: ");
  puts(nome);
  printf("\n");
  return 0;
}

//Inicializando variáveis na declaração
#include <stdio.h>
int aplica = 10000;
int main ( ) {
char carac_atual = '$';
printf("Aplicacao = %d\n\n", aplica);
printf("Caracter = %c\n",carac_atual);
return 0;
}

//Exemplo de Declaração de Variáveis
#include <stdio.h>
int numero, valor;
char resp;
int main( ) {
  // declaração
  int aplic;
  char carac;
  float rel;
  //inicialização
  aplic = 2;
  carac = 'A ';
  valor = 3;
  resp = 'B';
  rel = 333.22;
  // impressão dos valores
  printf ("aplic = %d\n",aplic);
  printf ("carac = %c\n", carac);
  printf ("valor = %d\n resp = %c\n rel = %3.2f\n",valor,resp,rel);
  return 0;
}

//Soma Subtracao Divisao
#include <stdio.h>
int main(){
  int a, b;
  printf("Digite um numero inteiro: ");
  scanf("%d", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%d",&b);
  printf("Soma: %d\n", a+b);
  printf("Subtracao: %d\n", a-b);
  printf("Divisao: %d\nResto: %d\n", a/b, a%b);
  return 0;
}

//Divisao
#include <stdio.h>
int main(){
  float a, b;
  printf("Digite um numero inteiro: ");
  scanf("%f", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%f",&b);
  printf("Divisao: %.4f\n", a/b);
  return 0;
}

//Multiplicacao
#include <stdio.h>
int main(){
  float a, b;
  printf("Digite um numero inteiro: ");
  scanf("%f", &a);
  printf("Digite outro numero inteiro: ");
  scanf("%f",&b);
  printf("Multiplicacao: %.2f\n", a*b);
  return 0;
}

//Exemplo do comando if
#include <stdio.h>
int main( ){
  int a, b, z;
  b = 2, a = 10;
  
  if (a > 0)
    printf ("valor positivo\n");
  if (a < b){
    z = a;
    printf("A e menor que B\n Z = %d", z);
  }
  else {
    z = b;
    printf("B e menor que A\n Z = %d", z);
  }
return(0);
}

//Exemplo de Comando While
#include <stdio.h>
int main( )
{
  int a = 10, b = 0;
  while ((a != 0) || (b != 10)){
    printf("A = %d B = %d\n",a, b);
    a--;
    b++;
    }
  return(0);
}

//Volume
#include <stdio.h>
#include<math.h>

#define pi 3.1416
int main(){
  int r;
  float volume;
  r=0;
  while (r<=6){
    volume=4/3*pi*pow(r,3);
    printf("R=%d\t Volume=%.3f\n",r,volume);
    r+=2;
    }
  return 0;
}

//Igual o ex de placa
#include<stdio.h>
int main(){
  int numero=1352, d4, d3, d2, d1;
  d4=numero%10;
  d3=(numero/10)%10;
  d2=(numero/100)%10;
  d1=(numero/1000)%10;
  printf("d4: %d\td3: %d\td2: %d\td1: %d",d4,d3,d2,d1);
  return 0;
}

//Valor positivo e negativo
#include <stdio.h>
#include<string.h>

int main(){
  int num;
  char qualquer[17];
  
  puts("Entre com um valor inteiro: ");
  scanf("%d",&num);
  if(num>0)
    strcpy(qualquer,"Número positivo");
  else if(num<0)
    strcpy(qualquer,"Número negativo");
  else
    strcpy(qualquer,"Zero");
  printf("%s\n",qualquer);
  return 0;
}

//Numero par e impar
#include <stdio.h>
#include<string.h>
#include <math.h>

int main(){
  int n, x;
  char val[14];
  puts("Entre com um número inteiro e positivo: ");
  scanf("%d",&n);
  x = n % 2;
  if(x == 0)
    strcpy(val,"Número par");
  else
    strcpy(val,"Número ímpar");
  printf("%s\n",val);
return 0;
}

//Numero maior ou menor
#include<stdio.h>

int main(){
  int valor, menor;

  puts("Entre com um valor inteiro: ");
  scanf("%d", &valor);
  menor = valor;
  while (valor != -1){
    if(valor < menor)
      menor = valor;
    puts("Entre com um valor inteiro: ");
    scanf("%d", &valor);
  }
  printf("O menor valor é: %d\n", menor);
  return 0;
}

*/
#include<stdio.h>

int main(){
  int num, num2, sum, div, mul, sub;
  printf("Numero 1: ");
  scanf("%d",&num);
  printf("Numero 2: ");
  scanf("%d",&num2);
  sum=num+num2;
  div=num / num2;
  mul=num*num2;
  sub=num-num2;
  printf("Soma: %d\n",sum);
  printf("Subtração: %d\n",sub);
  printf("Multiplicação: %d\n",mul);
  printf("Divisão: %d\n",div);
  return 0;
  
}