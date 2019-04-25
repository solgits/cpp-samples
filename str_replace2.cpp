// 함수 호출 방식

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* str_replace(char *src, const char *target, const char *add);

int main() 
{
	char str[] = "aabbccbbaa";

	printf("str = %s\n", str);

	char *result = str_replace(str, "bb", "111");
	if (result) {
		// printf("result  = %s\n", result); str_replace(str, "bb", "111"));
		printf("result  = %s\n", result);
		free(result);
	}

	return 0;
}

char* str_replace(char *src, const char *target, const char *add) 
{
	char *dest = (char*)calloc(30, sizeof(char));
	char *dp = dest;
	char *sp = src;
	char *pos = NULL;

	// while (pos = strstr(src, target)) {
	while (pos = strstr(sp, target)) {
		int len = pos - sp;
		strncpy(dp, sp, pos - sp);
		strcat(dp, add);
		sp = pos + strlen(target);
		dp += strlen(dp);
	}
	strcat(dp, sp);

	return dest;
}
