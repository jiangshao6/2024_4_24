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
		printf("�ռ俪��ʧ��\n");
	}
	//����ѧ���ĳɼ�
	for (int i = 0; i < 5;i++)
	{
		printf("������ѧ���ĳɼ�\n");
		scanf("%d",p+i);
	}
	//���ɼ�����60�ֵ�ѧ��
	check(p,5);
	//�ͷ�ָ�룬ָ��ָ��NULL

	free(p);
	p = NULL;
	return 0;
}