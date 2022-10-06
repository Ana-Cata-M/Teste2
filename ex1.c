#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, vet[10];
	printf("\nInforme 10 elementos:\n");
	for(i=0; i<10; i++){
		printf("Digite o elemento %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	printf("\nOs elementos lidos do vetor sao: \n");
	for(i=0; i<10; i++){
		printf("\n%d\n", vet[i]);
	}
	return 0;
}
