//ʵ��  	���һ������10�е����������
#include <stdio.h>

int main()
{
	int n = 10;
	int data[30] = { 1 };
	printf("1\n");//ֱ�Ӵ�ӡ��һ��
	for (int i = 1; i < n; i++)//�ӵڶ��п�ʼ
	{
		for (int j = i; j > 0; j--)//�Ӻ���ǰ�������һ�е�������ʹ��ǰ�ͱ�����
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