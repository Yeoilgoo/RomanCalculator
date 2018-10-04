#include "header.h"

void arabToRoman(int num, char* result) {
	char thousandDigit[3][4] = { "M", "MM", "MMM" }; // 1000
	char hundredDigit[9][5] = { "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" }; // 100
	char tenDigit[9][5] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" }; // 10
	char oneDigit[9][5] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" }; // 1

	if (num == 0) {
		strcat(result, "Z");
		return;
	}

	if (num < 4000 && num >= 1000) {
		strcat(result, thousandDigit[num / 1000 - 1]);
		num %= 1000;
	}

	if (num < 1000 && num >= 100) {
		strcat(result, hundredDigit[num / 100 - 1]);
		num %= 100;
	}

	if (num < 100 && num >= 10) {
		strcat(result, tenDigit[num / 10 - 1]);
		num %= 10;
	}
	
	if (num > 0) {
		strcat(result, oneDigit[num - 1]);
	}

	return;
}