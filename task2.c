#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE *file;
	int count = 0, character = 0, lines = 0;
	char ch;
	int inWord = 0;

	file = fopen("task2test.txt", "r");

	if (file == NULL) {
		printf("Error! Could not open file.\n");
		return 1;
	}

	while ((ch = fgetc(file)) != EOF) {

		putchar(ch);
		character++;

		if (ch == '\n') {
			lines++;
		}

		if (isspace(ch)) {
			inWord = 0;
		} else if (!inWord) {
			inWord = 1;
			count++;
		}
	}

	fclose(file);
	printf("\nwords = %d\ncharacter = %d\nlines = %d\n", count, character, lines);
	return 0;
}

