//实验  	输出一个含有10行的杨辉三角形
#include <stdio.h>

int main()
{
	int n = 10;
	int data[30] = { 1 };
	printf("1\n");//直接打印第一行
	for (int i = 1; i < n; i++)//从第二行开始
	{
		for (int j = i; j > 0; j--)//从后往前填，避免上一行的数据在使用前就被覆盖
		{
			data[j] += data[j - 1];
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", data[j]);
		}
		printf("\n");
	}
	return 0;
}