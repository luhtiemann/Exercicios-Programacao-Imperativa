/*
//Primerio código
#include <stdio.h>
int main(){
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
int main( ){
  int a = 10, b = 0;
  while ((a != 0) || (b != 10)){
    printf("A = %d B = %d\n",a, b);
    a--;
    b++;
    }
  return(0);
}

//Volume
#include<math.h>
#include <stdio.h>
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
#include <math.h>
#include <stdio.h>
#include<string.h>
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

//Soma, Divisao, Subtracao, Multiplicacao
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

//Área
#include<stdio.h>
int main(){
  float area, base, altura;
  printf("Base: ");
  scanf("%f",&base);
  printf("Altura: ");
  scanf("%f",&altura);
  area=base*altura;
  printf("Area: %f",area);
  return 0;
}

//Salário
#include<stdio.h>
int main(){
  char nome[50];
  float salario, vendas, comissao;
  printf("Nome: ");
  scanf("%s",nome);
  printf("Salario: ");
  scanf("%f",&salario);
  printf("Vendas: ");
  scanf("%f",&vendas);
  comissao=vendas*0.15;
  salario+=comissao;
  printf("Salario final: %f",salario);
  return 0;
}

//Exemplo de Comando For
#include <stdio.h>
int main( ){
  int i;
  for (i = 0; i < 10; i++){
    printf(" %d\n",i);
  }
  return 0;
}

//Exemplo de Comando Do-While
#include <stdio.h>
int main( ){
  int i;
    i = 1;
    do{
      printf("i = %d\n",i);
      i++;
  }while(i < 10);
  return 0;
}

// 1) Implemente o seguinte código usando do-while
#include <math.h>
#include<stdio.h>
#define pi 3.1416
int main(void){
  int r;
  float volume;
  do{
    volume=4/3*pi*pow(r,3.);
    printf("R= %d\t Volume= %.2f\n",r , volume);
    r+=2;
  }while(r<=6);
  return 0;
}

//2) Implemente o seguinte código usando for
#include <math.h>
#include<stdio.h>
#define pi 3.1416
int main(void){
  int r;
  float volume;
  for(r=0;r<=6;r++){
    volume=4/3*pi*pow(r,3.);
    printf("R= %d\t Volume= %.2f\n",r , volume);
    r+=2;
  }
  return 0;
}

// 3) Implemente o seguinte código usando o comando break
#include <math.h>
#include<stdio.h>
#define pi 3.1416
int main(void){
  float i;
  i=10;
  while(i>0){
    i=i-0.25;
    printf("%f\n",i);
    if((pow(i,2.)+1)>=1.45){
      i=i+0.20;
    }
    else{
      break;
    }
  }
  return 0;
}

// Elabore um programa em C para simular uma calculadora com as quatro operações
(+,-,/ e *), usando a estrutura switch. #include <stdio.h> int main(){ int oper;
  float n1, n2;
  printf("Operador: ");
  oper=getchar();
  printf("Primeiro número: ");
  scanf("%f", &n1);
  printf("Segundo número: ");
  scanf("%f", &n2);
  switch(oper){
    case '+':
      printf("%.1f + %.1f = %.1f", n1,n2,n1+n2);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", n1,n2,n1-n2);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", n1,n2,n1*n2);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", n1,n2,n1/n2);
      break;
    default:
      printf("Erro, operador incorreto");
  }
  return 0;
}

#include <stdio.h>
int main(){
  printf("%25.4d", 10);
  return 0;
}

//Constantes
#include <stdio.h>
const double PI=3.14159;
const int MAX_POR_EQUIPE=4;
const char ARROBA='@';
int main(){
  printf("%f\n",PI);
  printf("%d\n", MAX_POR_EQUIPE);
  printf("%c\n",ARROBA);
  return 0;
}

//Constantes
#include <stdio.h>
#define PI 3.14159
#define MAX_POR_EQUIPE 4
#define ARROBA '@'
int main(){
  printf("%f\n",PI);
  printf("%d\n", MAX_POR_EQUIPE);
  printf("%c\n",ARROBA);
  return 0;
}

//Exemplo usando const
#include <stdio.h>
const int vermelho=0;
const int verde=1;
const int amarelo=2;
int main(){
  int s1=verde;
  int s2=vermelho;
  printf("%d %d\n",s1,s2);
  if (s1==verde)
    puts("Permitido passar pelo semáforo primário");
  else if (s1==vermelho)
    puts("Obrigado a parar no semáforo primário");
  else
    puts("Semáforo primário preste a fechar, atenção!");
  return 0;
}

//Enumerado
#include<stdio.h>
enum coresSemaforo{vermelho, verde, amarelo};
int main(){
  enum coresSemaforo s1=verde;
  enum coresSemaforo s2=vermelho;
  printf("%d %d\n",s1,s2);
  if (s1==verde)
    puts("Permitido passar pelo semáforo primário");
  else if (s1==vermelho)
    puts("Obrigado a parar no semáforo primário");
  else
    puts("Semáforo primário preste a fechar, atenção!");
  return 0;
}

//Tipo Booleano temperatura e umidade
#include <stdbool.h>
#include <stdio.h>
int main(){
  double temp;
  printf("Digite a temperatura [real entre -20 e 50]: ");
  scanf("%lf", &temp);
  double umidade;
  printf("Digite a umidade[real entre 0 e 1]: ");
  scanf("%lf",&umidade);
  bool frio;
  bool calor;
  if (temp<10||(temp<20&&umidade>0.8))
    frio=true;
  else
    frio=false;
  if(temp>30||(temp>22||umidade<0.6))
    calor=true;
  else
    calor=false;
  if(frio)
    puts("Agasalhe-se bem!");
  else if(calor)
    puts("Beba bastante água");
  else
    puts("Aproveite a temperatura amena para estudar bastante!");
  return 0;
}

//sizeof: tipos primitivos
#include <stdbool.h>
#include<stdio.h>
int main(){
  int x=10;
  printf("int: %lu\n",sizeof(x));
  unsigned int y=10;
  printf("unsigned int: %lu\n",sizeof(y));
  short int z=10;
  printf("short int: %lu\n",sizeof(z));
  long int w=10;
  printf("long int: %lu\n",sizeof(w));
  float f=10;
  printf("float: %lu\n",sizeof(f));
  double d=10;
  printf("double: %lu\n",sizeof(d));
  char c='T';
  printf("char: %lu\n",sizeof(c));
  return 0;
}

//sizeof: bool
#include<stdbool.h>
#include <stdio.h>
int main(){
  bool calor=false;
  printf("bol: %lu\n",sizeof(calor));
  return 0;
}

//sizeof: enum
#include <stdio.h>
enum coresSemaforo{vermelho, verde, amarelo};
int main(){
  enum coresSemaforo s1 =verde;
  printf("enum: %lu\n", sizeof(s1));
  printf("S1: %d\n", s1);
  return 0;
}

//Exemplo usando estrutura
#include <stdio.h>
struct reg {
  int codigo;
  float valor;
 };
int main() {
  struct reg tabela[5];
  int i;
  for(i=0; i <= 4; i++){
   printf("codigo:"); scanf("%d", &tabela[i].codigo);
   printf("valor:") ;scanf("%f", &tabela[i].valor);
  }
  for(i=0; i <= 4; i++)
   printf("codigo: %d valor:%8.2f\n",tabela[i].codigo, tabela[i].valor);
  return(0);
}

//Estrutura Composta
#include <stdio.h>
struct data {
  int dia;
  int mes;
  int ano;
 };
struct reg {
  int codigo;
  struct data data_c;
 };
int main() {
  struct reg tabela[5];
  int i;
  for(i=0; i<=4; i++) {
   printf("codigo:"); scanf("%d",&tabela[i].codigo);
   printf("dia:"); scanf("%d",&tabela[i].data_c.dia);
   printf("mes:"); scanf("%d",&tabela[i].data_c.mes);
   printf("ano:"); scanf("%d",&tabela[i].data_c.ano);
  }
  for(i=0; i<=4; i++)
   printf("codigo: %d data: %d/%d/%d\n",tabela[i].codigo, tabela[i].data_c.dia,
tabela[i].data_c.mes, tabela[i].data_c.ano); return(0);
}

//Exemplo de vetor simples
#include <stdio.h>
void main( ){
  int i, quad[10];
  for (i = 0; i < 10; i++)
    quad[i] = i * i;
  for (i = 0; i < 10; i++)
    printf("quadrado de %d = %d\n", i, quad[i]);
  return 0;
}

//Exemplo de bool
#include <stdbool.h>
#include <stdio.h>
int main(){
  bool b[]={true,false,false,true,true,false};
  int numElementos=sizeof(b)/sizeof(bool);
  printf("Número de elementos: %d\n", numElementos);
  for (int i=0;i<numElementos;i++){
    if(b[i])
      puts("verdadeiro");
    else
      puts("falso");
  }
  return 0;
}

//Tamanho de um vetor
#include<stdio.h>
int main(){
  int numeros[]={0,1,2,3};
  printf("int[]: %lu\n", sizeof(numeros));
  printf("Terceiro número: %d\n",numeros[3]);
  return 0;
}

//Exemplo de Vetor Multidimensional
#include <stdio.h>
void main( ){
  int i;
  char nome[5][10] = {"Carmen","Ricardo","Alexandre","Ana Paula","Eduardo"};
  for (i = 0; i < 5; i++) {
    printf("nome : ");
    printf("%s\n", nome[i]);
 }
}

//Exemplo de Vetor Multidimensional
#include <stdio.h>
void main( ){
  int i,j;
  int matriz[5][5] = { {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5},
{1,2,3,4,5} }; for (i = 0; i < 5; i++) for (j=4; j>=0;j--){ printf("%d ",
matriz[i][j]); printf("\n");
 }
}

//Exemplo de Vetor Multidimensional
#include <stdio.h>
void main(){
 int i;
 int j;
 char nome[5][10] = { "Carmen" , "Ricardo", "Alexandre", "Ana Paula", "Eduardo"
}; for (i = 0; i < 5; i++) { printf("nome : "); printf("%s\n", nome[i]);} for
(i=0;i<5;i++){ printf("nome : "); for (j=0;j<9;j++){ printf("%c",nome[i][j]);}
   printf("\n");}
}

//Exemplo de Vetor Multidimensional
#include <stdio.h>
void main( ){
 int i,j;
 int matriz[5][5] = { {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5},
{1,2,3,4,5} }; for (i = 0; i < 5; i++) { for (j=4; j>=0;j--) printf("%d ",
matriz[i][j]); printf("\n");
 }
}

#include <stdio.h>
int main(int argc, char *argv[]){
int i;
if (argc != 2){
printf("Número de parâmetros incorreto!\n");
return -1;
}
for (i= 0; i <= argc ;++i){
printf("argv[%d] -> \"%s\"\n",i, argv[i]);
}
printf("\n");
return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    exit(EXIT_SUCCESS);
}

#include <stdio.h>
int main(int argc, char *argv[]){
int i;
if (argc != 2){
printf("Número de parâmetros incorreto!\n");
return -1;
}
for (i= 0; i <= argc ;++i){
printf("argv[%d] -> \"%s\"\n",i, argv[i]);
}
printf("\n");
return 0;
}

//Com base na calculadora vista em sala, elabore um Aplicação
//(calculadora) em C com as seguintes funcionalidades:
//• Quatro operações básicas (+, -, *, /) – já vista
//• Quadrado de um número (x**2)
//• Um número elevado a outo (x**y)
//• O inverso de um número (1/x)
//• A raiz quadrada de um número (x**1/2)
//• A raiz qualquer de um número (x**1/y)
//• O valor absoluto de um número (ABS(x))
//• O fatorial de um número (x!)

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float soma(float *, float *);
float sub(float *, float *);
float multi(float *, float *);
float divi(float *, float *);
float xEy(float *, float *);
float xRy(float *, float *);
float xE2(float *);
float xR2(float *);
float InvX(float *);
float ABS(float *);
float FAT(float *);

int main() {
  int op;
  float valor_x, valor_y;
  
  do{
    system("clear");
    puts("Calculadora Científica\n\n");
    puts("1:\tSoma\n2:\tSubtração\n3:\tMultiplicação\n4:\tDivisão\n5:\tX^2\n6:\tx^y\n7:\t1/x\n8:\tx^1/2\n9:\tx^1/y\nA:\tABS(x)\nB:\tx!\n\nS:\tSair\n");
    
    op=getchar();
    
    switch (op){
      case '1': 
        system("clear"); 
        puts("Soma\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        puts("Entre com y: "); scanf("%f",&valor_y); getchar();
        printf("Resposta: %f\n",soma(&valor_x,&valor_y));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '2':
        system("clear"); 
        puts("Subtração\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        puts("Entre com y: "); scanf("%f",&valor_y); getchar();
        printf("Resposta: %f\n",sub(&valor_x,&valor_y));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '3':
        system("clear"); 
        puts("Multiplicação\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        puts("Entre com y: "); scanf("%f",&valor_y); getchar();
        printf("Resposta: %f\n",multi(&valor_x,&valor_y));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '4':
        system("clear"); 
        puts("Divisão\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        puts("Entre com y: "); scanf("%f",&valor_y); getchar();
        if (valor_y != 0){
          printf("Resposta: %f\n",divi(&valor_x,&valor_y));
          puts("\nTecle algo para continuar..."); getchar(); 
        }
        else {
          puts("O valor de Y não pode ser ZERO!");
          puts("\nTecle algo para continuar..."); getchar(); 
        }  
      break;
      case '5':
        system("clear"); 
        puts("x ^ 2\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        printf("Resposta: %f\n",xE2(&valor_x));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '6':
        system("clear"); 
        puts("x ^ y\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        puts("Entre com y: "); scanf("%f",&valor_y); getchar();
        printf("Resposta: %f\n",xEy(&valor_x,&valor_y));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '7':
        system("clear"); 
        puts("Inverso de x\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        printf("Resposta: %f\n",InvX(&valor_x));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '8':
        system("clear"); 
        puts("Raiz Quadrada\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        printf("Resposta: %f\n",xR2(&valor_x));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case '9':
        system("clear"); 
        puts("Raiz de um número qualquer\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        puts("Entre com y: "); scanf("%f",&valor_y); getchar();
        printf("Resposta: %f\n",xRy(&valor_x,&valor_y));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case 'A':
        system("clear"); 
        puts("Valor Absoluto\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        printf("Resposta: %f\n",ABS(&valor_x));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
      case 'B':
        system("clear"); 
        puts("Fatorial\n"); 
        puts("Entre com x: "); scanf("%f",&valor_x); getchar();
        printf("Resposta: %f\n",FAT(&valor_x));
        puts("\nTecle algo para continuar..."); getchar(); 
      break;
    }
  }while (toupper(op) !='S');  
  return 0;
}

float soma(float *a, float *b) { return *a + *b; }
float sub(float *a, float *b) { return *a - *b; }
float multi(float *a, float *b) { return *a * *b; }
float divi(float *a, float *b) { return *a / *b; }
float xEy(float *x, float *y) {
  int i; float res = *x;
  return (float)pow(*x, *y);}
float xRy(float *x, float *y) { return (float)pow(*x, 1 / *y); }
float xE2(float *x) { return *x * *x; }
float xR2(float *x) { return (float)pow(*x, 0.5); }
float InvX(float *x) { return 1 / *x; }
float ABS(float *x) {
  if (*x < 0)
    return (-1) * *x;
  else
    return *x;}
float FAT(float *x) {
  int fat = 1, i;
  if (*x == 0)
    return fat;
  else {
    for (i = 1; i <= *x; i++)
      fat *= i;
    return fat;}
}  

//3) Elabore um aplicação em C, usando ponteiros, que inicialize duasmatrizes de 4x4 com valores 1,  implemente uma função que imprima uma terceira matriz com a soma dos elementos de cada célula, respecFva. 

#include <stdio.h>

void soma_matriz(int *, int *, int *);

int main(){
  int i,j;
  int m_1 [4] [4] = { {1,1,1,1},
                      {1,1,1,1},
                      {1,1,1,1},
                      {1,1,1,1}};
  int m_2 [4] [4] = { {1,1,1,1},
                      {1,1,1,1},
                      {1,1,1,1},
                      {1,1,1,1}};
  int m_s [4][4];

  soma_matriz(m_1,m_2,m_s);
  
  for (i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("%d",m_s[i][j]);
    printf("\n");  
    }
  }
  void soma_matriz(int *M_1, int *M_2, int *M_s){
    int i,j;
    for (i=0;i<4;i++){
      for(j=0;j<4;j++){
        M_s[i][j] = M_1[i][j] + M_2[i][j];
      printf("%d",m_s[i][j]);
    printf("\n");  
    }
  }
  }
}

*/