#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void *check(int *p,int sz)
{
	int i = 5;
	for (i = 0; i < sz; i++){
		if (*(p+i)<60)
		{
			printf("%d ", *(p + i));
		}

	}

}
int main()
{
	
	
	int *p = (int*)malloc(sizeof(int)* 5);
	if (p == NULL)
	{
		printf("空间开辟失败\n");
	}
	//输入学生的成绩
	for (int i = 0; i < 5;i++)
	{
		printf("请输入学生的成绩\n");
		scanf("%d",p+i);
	}
	//检查成绩低于60分的学生
	check(p,5);
	//释放指针，指针指向NULL

	free(p);
	p = NULL;
	return 0;
}