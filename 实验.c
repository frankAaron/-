//ʵ��  	����һ��Ӣ�ľ��ӣ�ͳ�ƾ����е��ʵĸ���
//���2316 ���Ž�
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    int sum = 0, word = 0;
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            word = 0;
        else if (word == 0)
        {
            word = 1;
            ++sum;
        }
    }
    printf("%d", sum);
    return 0;
}