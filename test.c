#include <stdio.h>

void squeeze(char str[], char c);
void strcat(char str[], char t[]);

int main() {
	char str[1000] = "this is a test";
	char c[] = "all concated";
	squeeze(str, 'h');
	strcat(str, c);
	printf("%s\n", str);
	return 0;
}

// any is like indexOf
int any(char s1[], char s2[]) {
	
}

void squeeze(char str[], char c) {
	int i,j;
	for (i=j=0; str[i] != '\0'; i++) {
		if (str[i] != c)
			str[j++] = str[i];
	}
	str[j] = '\0';
}

void strcat(char str[], char t[]) {
	int i,j;
	i = j = 0;

	while (str[i] != '\0')
		i++;
	while ((str[i++] = t[j++]) != '\0');
}