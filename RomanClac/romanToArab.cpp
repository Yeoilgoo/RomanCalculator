#include "header.h"

int romanToArab(char *string) {
	int i;
	int result = 0;

	for (i = strlen(string) - 1; i >= 0; i--) {
		switch(string[i]){
		case 'Z': 
			result += 0;
			if (strlen(string) != 1) {
				return -1;
			}
			break;
		case 'I': 
			result += 1;
			break;
		case 'V' :
			if (string[i - 1] == 'I') {
				result += 4, i--;
			}
			else {
				result += 5;
			}
			break;
		case 'X': 
			if (string[i - 1] == 'I') {
				result += 9, i--;
			}
			else {
				result += 10;
			}
			break;
		case 'L': 
			if (string[i - 1] == 'X') {
				result += 40, i--;
			}
			else {
				result += 50;
			}
			break;
		case 'C': 
			if (string[i - 1] == 'X') {
				result += 90, i--;
			}
			else {
				result += 100;
			}
			break;
		case 'D': 
			if (string[i - 1] == 'C') {
				result += 400, i--;
			}
			else {
				result += 500;
			}
			break;
		case 'M': 
			if (string[i - 1] == 'C') {
				result += 900, i--;
			}
			else {
				result += 1000;
			}
			break;
		default :
			return -1;;
		}
	}

	return result;
}