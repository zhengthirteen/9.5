#include<stdio.h>
#include<string.h>
int main(void)
{
	char arr_1[] = "abcdefgh";
    char arr_2[] = {'a','b','c'};
    int len = strlen("abcdefgh");
    printf("%d\n", len);
	enum age
	{ age_1,
	  age_2,
	  age_3,
	};
    printf("%d\n", age_1);
	printf("%d\n", age_2);
	printf("%d\n", age_3);


	printf("a\fb\b");
	printf("%c\n",'\124');
	printf("%d\n", strlen("adsasf\t\123\x32"));
	return 0;
}








