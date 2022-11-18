/*
	1 - Teste este programa. Ele espera que o usuário
	digite uma string e tecle "Enter". Então ele retorna
	a string ao usuário.
	2 - Modifique este programa para, em conjunto com 
	códigos anteriores, redirecionar a contagem (progressiva, regressiva).
*/

#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void){
char PROGRESSIVO[] = "progressivo\n";
char REGRESSIVO[] = "regressivo\n";
int i=0;
  char c = 0;
  char str[100];
  memset(str, 0, sizeof(str));
  while (c != '\n')
  {
    c = getchar();
    if (c != 0xff)
    {
      str[strlen(str)] = c;
      printf("%c", c);
    }
        vTaskDelay(100 / portTICK_PERIOD_MS);
  }
printf("\n");

int comparacao = strcmp(str,PROGRESSIVO);
int comparacao2 = strcmp(str,REGRESSIVO);

printf(" %s\n",str);
printf(" %d <--\n",comparacao);

if(comparacao == 0){
    for(i=1; i<=10; i++){
        printf("%d\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}else{ if(comparacao2 == 0){ 
    for(i=10; i>=1; i--){
        printf("%d\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    }
}

}