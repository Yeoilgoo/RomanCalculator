#include "header.h"

int makeAnswerSheet(char* input) {
	char buffer[20];
	int i = strlen(input);

	while (input[i] != '=') {
		i--;
	}

	strcpy(buffer, input + i + 1);

	return romanToArab(buffer);
}