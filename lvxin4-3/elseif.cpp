#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{//&&是而且的意思，当两边的条件同时为真结果才是真
	int n = 0, sal = 0;
	puts("请输入你本月的销售量：");
	scanf("%d", &n);
	if (n < 100)
		sal = n * 20;	//销售100件以内，每件按20元提成
	else if (n >= 100 && n < 200)
		sal = n * 25;	//销售100-200件，每件按25元提成
	else if (n >= 200 && n < 300)
		sal = n * 30;	//销售200-300件，每件按30元提成
	else
		sal = n * 40;	//若能销售300件以上每件按40元提成
	printf("你本月的销售提成为：%d元\n", sal);
	return 0;
}
