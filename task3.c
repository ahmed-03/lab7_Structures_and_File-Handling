#include <stdio.h>

int main() {
	int values[20];
	char ch;
	int i = 0;
	FILE *file = fopen("bitstream.bit", "rb");

	if (file == NULL) {
		printf("Error");
		return 1;
	}

	while ((ch = fgetc(file)) != EOF) {
		if (ch == '0' || ch == '1') {
			values[i] = ch - '0';
			i++;
		}
	}

	fclose(file);

	for (int j = i - 1; j >= 0; j--) {
		printf(" %d", values[j]);
	}
	printf("\n");

	int value = 0;
	int count = 0;
	for (int j = i - 1; j >= 0; j--) {
		value = (value << 1) | values[j];
		count++;

		if (count == 4 || j == i - 1) {
			printf("%X", value);
			value = 0;
			count = 0;
		}
	}

	return 0;
}

