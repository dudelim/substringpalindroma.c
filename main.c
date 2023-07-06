#include <stdio.h>
#include <string.h>

int sget(char* vetor, int tam) {
    fflush(stdin); 
    if (fgets(vetor, tam, stdin)) { 
        int i;
        for( i = 0; vetor[i] != '\n' && vetor[i]; ++i)
          ;
        vetor[i] = '\0';
    }
}


int verificarPalindromo(char palavra[]){
  int i = 0;
  int checar = 0;

  for(i = 0; i < (strlen(palavra)/2+1); i++){
    if (palavra[i] != palavra[strlen(palavra)-i-1]){
      checar = 0;
    }
  }
  return checar;
}



int main(void) {
  printf("Hello World\n");
  return 0;
}