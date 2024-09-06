#include<stdio.h>
#include<string.h>

#define TAMANHO_MAXIMO_LINHA 1024

int main(int argc, char *argv[]){

//o fopen vai abrir e  ler os 2 ficheiros fornecidos como argumentos 1 e 2
FILE *primeiro_ficheiro = fopen(argv[1], "r");
FILE *segundo_ficheiro = fopen(argv[2], "r");

//linha que estamos a comparar entre os 2 ficheiros
int linha_a_comparar = 1;
//esta variável vai guardar a string da linha lida no momento do primeiro ficheiro
char linha_primeiro_ficheiro[TAMANHO_MAXIMO_LINHA];
//esta variável vai guardar a string da linha lida no momento do segundo ficheiro
char linha_segundo_ficheiro[TAMANHO_MAXIMO_LINHA];

//serve para compararmos as linhas dos 2 ficheiros e o programa para de comparar quando deixar de haver linhas nos 2 ficheiros para comparar
while( fgets(linha_primeiro_ficheiro, TAMANHO_MAXIMO_LINHA, primeiro_ficheiro) && fgets(linha_segundo_ficheiro, TAMANHO_MAXIMO_LINHA, segundo_ficheiro)){

 if(strcmp(linha_primeiro_ficheiro, linha_segundo_ficheiro) != 0) {
 	printf("#%d: ", linha_a_comparar);
	printf("%s", linha_primeiro_ficheiro);
        printf("%s", linha_segundo_ficheiro);
}else{
linha_a_comparar++;
}


}
//serve para fecharmos os ficheiros que tinhamos aberto
fclose(primeiro_ficheiro);
fclose(segundo_ficheiro);

return 0;
}
