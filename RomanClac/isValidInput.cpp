#include "header.h"

int isValidInput(char* input) {
	int i;
	char buffer[8000] = { '\0' };
	int result = 0;

	if (romanToArab(input) != -1) {
		arabToRoman(romanToArab(input), buffer);

		if (strcmp(input, buffer) == 0) {
			result = 1;
		}
	}

	return result;
}