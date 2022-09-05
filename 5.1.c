#include<stdio.h>
#include<string.h>
int main()
{
	int 天数 = 0;
	while (天数 <999999)
	{
		printf("李志超努力学习和锻炼day%d\n", 天数);
		天数++;
	}
	if (天数 == 999999)
	{
		printf("有情人终成眷属\n\n\n\n");
	}
	printf("of course not,输入truth查看真实结局\n");
	scanf_s("&truth");
		printf("%s\n,有些故事不一定要有结局");	
	return 0;
}