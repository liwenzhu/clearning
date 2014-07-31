#include <stdio.h>

void squeeze(char str[], char c);
void strcat(char str[], char t[]);
int any(char s1[], char s2[]);

int main() {
	char str[1000] = "this is a test";
	char c[] = "all concated";
	squeeze(str, 'h');
	strcat(str, c);
	printf("%s\n", str);
	int index = any(str, "est");
	printf("index: %d\n", index);
	return 0;
}

// any is like indexOf
int any(char s1[], char s2[]) {
	int i,j;
	int index;
	index = -1;
	i = j = 0;
	while (s1[i]!='\0') {
		if(s1[i] == s2[j])
			index = i; 
		while (s1[i] == s2[j] && s2[j] != '\0') {
			i++;
			j++;
		}
		if (s2[j] == '\0') {
			return index;			
		} else {
			j = 0;
			i++;
			index = -1;
		}
	}
	return index;
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