#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

struct freqSir{
	char caract[100];
	int freq[100];
} sir;

int main() {

	char s[100];
	int n = 0;
	int meet = 0;

	printf("sir: ");
	gets(s);

	int size = strlen(s);
	printf("CUVANT = %s \n", s);
	// printf("s[%d] = %c \n", i, s[i]);


	// Put char in struct
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < strlen(sir.caract); j++)
		{
			if (s[i] == sir.caract[j]) {
				meet = 1;
			}

		
		}

		if (meet == 0) {
			sir.caract[n] = s[i];
			sir.freq[n] = 0;
			n++;
		}
		meet = 0;
	

		// Incre FREQ
	}
	
	for (int i = 0; i < strlen(sir.caract); i++) {
		
		for (int j = 0; j < size; j++) {
			if (sir.caract[i] == s[j]) {
				sir.freq[i]++;
			}
		}
	}
	int sizeFreq = strlen(sir.caract);

	puts(sir.caract);

	for (int i = 0; i < sizeFreq; i++) {
		printf("%d", sir.freq[i]);
	}
	printf("\n");

	system("pause");

	return 0;
}

