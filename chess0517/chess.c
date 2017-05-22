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
		printf("黑方胜利，黑方胜子%d", k - q);
	else
		printf("白方胜利，白方胜子%d", q - k);
	return 0;
}