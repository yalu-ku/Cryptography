#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void countAlpha(char* str, int* count);

int main() 
{
	int count[26] = { 0 }; 
	char str[10001] = { 0 };

	fgets(str, sizeof(str), stdin); // �� �� ���๮�� �������ֱ� ����
	str[strlen(str) - 1] = 0;

	countAlpha(str, count);

	for (int i = 0; i < 26; i++)
	{
		printf("%c : %d\n", 'A' + i, count[i]);
	}
}

void countAlpha(char* str, int* count) //Ư�� ���ڿ��� �޾Ƽ� �� �ȿ� ���ĺ��� �󸶸�ŭ ������ �ִ���
{
	char* p = str; //������ ����, ���ڿ� �޾���

	while(*p)
	{
		if (*p >= 'a' && *p < 'z') count[*p - 'a']++; //b�� ������ 1�� �ش�(ù��°) �ϴ� �迭 ���� ����
		else if (*p >= 'A' && *p <= 'Z') count[*p - 'A']++; //�빮��

		p++; //���ڿ��� ������ 0(main�� count), 0������ �ݺ��� ��������
	}
}