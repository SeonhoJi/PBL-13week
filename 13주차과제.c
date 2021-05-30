#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* s) {
	char* answer = (char*)malloc(sizeof(char) * 2);
	int len = strlen(s);

	if (len % 2 == 0) {
		answer[0] = s[len / 2-1];
		answer[1] = s[len / 2];
	}
	else {
		answer[0] = s[len / 2];
	}
	return answer;
	free(answer);
}
void main()
{
	printf("가운데 글자 : %s", solution("abcde")); //가운데 글자 출력
	printf("\n");
	printf("가운데 글자 : %s", solution("qwer"));
	printf("\n");
}
