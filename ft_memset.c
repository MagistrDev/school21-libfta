#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *str;

	str = (char*)malloc(sizeof(char)*4);
	memset(str,'h',8);
	printf("%s\n", str);
	return 0;
}
