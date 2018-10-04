#include "header.h"

void eliminateSpace(char* string) {
	int i, j = 0;
	char buffer[8000];

	for (i = 0; string[i] != '\0'; i++) {
		if (isspace(string[i]) != 0) {
			continue;
		}

		buffer[j] = string[i];
		j++;
	}
	buffer[j] = '\0';
	strcpy(string, buffer);

	return;
}