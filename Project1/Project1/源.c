#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void printN(int N)
//{
//	int i;
//	for(i=1;i<=N;i++)
//	{
//		printf("%d ", i);
//	}
//	return;
//}
void printN(int N)
{
	if (N)
	{
		printN(N - 1);
		printf("%d ", N);
	}
	return;
}
int main()
{
	int N;
	scanf("%d", &N);
	printN(N);
	system("pause");
	return 0;
}
