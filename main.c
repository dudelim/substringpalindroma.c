#include <stdio.h>
#include <string.h>
 

int checarpalindromo(char* palavra, int i, int k){
    for(i; i < (strlen(palavra)/2 + 1); i++){
    if(palavra[i] != palavra[k]){
      return 0;
      k--;
    }
    return 1;
}
  }
 

int maiorpalindromo(char* palavra){
   
    char maior[50] = "";
    int x = strlen(palavra);
    int maior_comp = 1;
 
   
    for (int i = 0; i < x; i++) {
        for (int j = i; j < x; j++) {
            
            if (checarpalindromo(palavra, i, j)) {
                int comprimento = j - i + 1;
                if (comprimento > maior_comp) {
                    maior_comp = comprimento;
                    strncpy(maior, palavra + i, maior_comp);
                    maior[maior_comp] = '\0';
                }
            }
        }
    }
    printf("Output: %s", maior);
}

 
int main()
{
    char* palavra = "babad";
    printf("\n", maiorpalindromo(palavra));
    return 0;
}