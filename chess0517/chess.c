#include<stdio.h>
int main(void)
{
	int k = 0, q = 0;
	int i = 0, j = 0;
	int a[5][5] = { 0,0,0,0,0,-1,-1,-1,-1,-1,-1,1,1,-1,1,-1,1,0,1,1,1,1,1,0,0 };
	for (i=0;i<=4;i++)
	{
		x=
		for (j=0;j<=4;j++)
		{
			if (a[i][j] == 1)

				k++;
			else if(a[i][j]==-1)
				q++;			
			else
			{

			}
		}
	}
	if (k >= q)
		printf("�ڷ�ʤ�����ڷ�ʤ��%d", k - q);
	else
		printf("�׷�ʤ�����׷�ʤ��%d", q - k);
	return 0;
}