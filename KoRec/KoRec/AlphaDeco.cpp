#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void countAlpha(char* str, int* count);

int main() 
{
	int count[26] = { 0 }; 
	char str[10001] = { 0 };

	fgets(str, sizeof(str), stdin); // 맨 끝 개행문자 제거해주기 위해
	str[strlen(str) - 1] = 0;

	countAlpha(str, count);

	for (int i = 0; i < 26; i++)
	{
		printf("%c : %d\n", 'A' + i, count[i]);
	}
}

void countAlpha(char* str, int* count) //특정 문자열을 받아서 그 안에 알파벳이 얼마만큼 쓰어져 있는지
{
	char* p = str; //포인터 선언, 문자열 받아줌

	while(*p)
	{
		if (*p >= 'a' && *p < 'z') count[*p - 'a']++; //b가 들어오면 1에 해당(첫번째) 하는 배열 원소 증가
		else if (*p >= 'A' && *p <= 'Z') count[*p - 'A']++; //대문자

		p++; //문자열은 끝값이 0(main의 count), 0만나면 반복문 빠져나옴
	}
}