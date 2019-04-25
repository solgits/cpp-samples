#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	char str[] = "aabbccbbaa";

	char* dest = (char*)calloc(30, sizeof(char));
	char *dp = dest;
	char *sp = str;
	char *pos = NULL;

	printf("str = %s\n", str);

	while (pos = strstr(sp, "bb")) {
		strncpy(dp, sp, pos - sp);
		strcat(dp, "111");
		dp += strlen(dp);
		sp = pos + strlen("bb");
	}

	strcat(dp, sp);
	printf("result = %s\n", dest);

	free(dest);
	return 0;
}
