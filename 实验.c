//实验  	输入一个英文句子，统计句子中单词的个数
//软件2316 朱昱杰
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