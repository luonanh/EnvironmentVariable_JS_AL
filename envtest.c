// https://www.youtube.com/watch?v=ADh_OFBfdEE
#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv, char **envp)
{
	char *value;
	int i;

	putenv("PASSCODE1=AnhTry");
	setenv("PASSCODE2", "GonTry", 1);

	value = getenv("HOME");
	printf("HOME= %s\n", value);
	value = getenv("USER");
	printf("USER= %s\n", value);
	value = getenv("PASSWORD");
	printf("PASSWORD= %s\n", value);
	for (i = 0; envp[i] != NULL; i++) {
		printf("%d: %s\n", i, envp[i]);
	}
	printf("***************************\n");
	for (i = 0; environ[i] != NULL; i++) {
		printf("%d: %s\n", i, environ[i]);
	}
	return 0;
}
