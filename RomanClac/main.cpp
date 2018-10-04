#include "header.h"

int main() {

	int i, num, result;
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		int answerSheet = 0;
		char firstInput[8000] = { '\0' };
		char* input = '\0';
		char myAnswer[20] = { '\0' };
		char realAnswer[20] = { '\0' };

		scanf(" %[^\n]s", firstInput);
		eliminateSpace(firstInput);
		answerSheet = makeAnswerSheet(firstInput);

		input = strtok(firstInput, "=");
		result = romanCaculator(input);
		arabToRoman(result, myAnswer);
		arabToRoman(answerSheet, realAnswer);

		printf("%d-(%s, %s)", i + 1, myAnswer, realAnswer);
		if (strcmp(myAnswer, realAnswer) == 0) {
			printf("PASS\n");
		}
		else {
			printf("FAIL\n");
		}

		result = 0;
	}

	return 0;
}