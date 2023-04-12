#include "../include/fatorial.h"
#include "../include/fibonacci.h"
#include "../include/tmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

// definicoes de operacoes a serem testadas
#define FATI 1
#define FATR 2
#define FIBI 3
#define FIBR 4

// variaveis globais para opcoes
int opescolhida;
int optx;

void parse_args(int argc,char ** argv)
{
  extern char * optarg;

  int c;  //variável auxiliar

  opescolhida = -1;
  optx = -1;

  while((c = getopt(argc, argv, "a:b:c:d:")) != EOF)
  {
    switch(c) 
    {
      case 'a':
        opescolhida = FATI;
        break;
      
      case 'b':
	      opescolhida = FATR;
        break;
      
      case 'c':
	      opescolhida = FIBI;
        break;
      
      case 'd':
	      opescolhida = FIBR;
        break;
    }
    optx = atoi(optarg);
  }
}

int main(int argc, char ** argv)
{
  parse_args(argc,argv);  // avaliar linha de comando
  long int valor = 0;
  
  struct rusage start, end;
  getrusage(RUSAGE_SELF, &start); // o inteiro RUSAGE_SELF é definido em <sys/resource.h>
  
  // execucao dependente da operacao escolhida
  switch(opescolhida)
  {
    case FATI:
      valor = fatorial_iterativo(optx);
      printf("O resultado do fatorial iterativo de %i é %li\n", optx, valor);
      printf("Status Fatorial Iterativo\n");
      break;
    
    case FATR:
      valor = fatorial_recursivo(optx);
      printf("O resultado do fatorial recursivo de %i é %li\n", optx, valor);
	    printf("Status Fatorial Recursivo\n");
      break;
    
    case FIBI:
      valor = fibonacci_iterativo(optx);
      printf("O número do fibonacci iterativo que ocupa a posição %i é %li\n", optx, valor);
	    printf("Status Fibonacci Iterativo\n");
      break;
    
    case FIBR:
      valor = fibonacci_recursivo(optx);
      printf("O número do fibonacci recursivo que ocupa a posição %i é %li\n", optx, valor);
	    printf("Status Fibonacci Recursivo\n");
      break;
  }

  getrusage(RUSAGE_SELF, &end);
  printf("Tempo de usuario (CPU): %f\n", diffUserTime(&start, &end));
  printf("Tempo de sistema: %f\n\n", diffSystemTime(&start, &end));

  return 0; //conclui o registro de acesso
}