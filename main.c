//scrivere un programma che legge da stdin una riga alla volta (la riga si considera terminata dal carattere \n).
//
//la lunghezza della riga è arbitraria, non fare ipotesi sulla massima lunghezza di riga.
//[in questo esercizio, non occorre immagazzinare l'intera riga].
//
//calcolare la media della lunghezza (=numero di caratteri) delle righe lette che vengono lette da stdin.
//
//dopo ogni riga letta, mostrare la lunghezza della riga e la media "parziale" fino a quel momento.
//
//il programma termina in caso di EOF su stdin.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void readLine();

float sum = 0;
int lineRead = 0;

int main(int argc, char *argv[]) {
	readLine();

	return 0;
}

void readLine(){
	int c;
	int count = 0;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			sum += count;
			lineRead++;
			printf("Linea (%d), Media: %f\n", lineRead, (sum/lineRead));
			readLine();
		}
		else{
			count++;
		}
	}
}
