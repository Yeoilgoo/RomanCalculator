#include "header.h"

int romanCaculator(const char* input) {
	int result = 0;
	int i;

	for (i = 0; i < strlen(input); i++) {
		char buffer[20] = { '\0' };
		int j = i;
		if (result < 0 || result > 3999) {
			result = 0;
		}

		if (!isupper(input[i])) { 
			if (!isupper(input[i + 1])) { // ex) ++
				result = 0;
				i++;
			}

			continue;
		}

		while (isupper(input[j])) {
			j++;
		}

		strncpy(buffer, input + i, j - i);

		if (!isValidInput(buffer)) {
			i += strlen(buffer);
			result = 0;
			continue;
		}

		if (input[i - 1] == '*') {
			result *= romanToArab(buffer);
		}

		else if (input[i - 1] == '/') {
			if (!romanToArab(buffer)) {
				result = 0;
				i += strlen(buffer);
				continue;
			}

			result /= romanToArab(buffer);
		}

		else if (input[i - 1] == '-') {
			result -= romanToArab(buffer);
		}

		else {
			result += romanToArab(buffer);
		}

		i += strlen(buffer);
	}

	if (result < 0 || result > 3999) {
		result = 0;
	}

	return result;
}