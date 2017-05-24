#include<stdio.h>
int main(void)
{
	int k = 0, c = 0, i = 0, j = 0, a = 0,b=0;
	double pb = 5.5;
	//k，c分别为行、列初始棋子标的；i，j分别为循环变量值；w,b,n分别为白色、黑色、空白数目；
double sum[3] ;//不得不为原始代码的作者的思路感到一丝丝的惊叹，一维变量的三个数值用来统计对应的数目。
	sum[0] = 0; //用以统计白子数目；
	sum[1] = 0; //用以统计黑子数目；
	sum[2] = 0; //用以暂存空格数目；
	printf("当前黑方贴目额为五目半，请确认.\n");
	int qp[19][19] = { {2,2,2,2,2,2,2,0,0,1,1,1,2,2,1,1,0,2,2},
	{2,2,2,2,2,2,2,0,0,1,1,2,1,2,1,0,0,2,2 },
	{2,2,2,0,2,2,2,0,1,1,2,2,2,2,2,1,0,0,2 },
	{2,2,2,2,2,2,2,0,0,1,2,2,2,2,2,1,0,2,2 },
	{2,2,0,2,2,2,0,1,1,2,2,1,2,2,2,1,0,2,2 },
	{2,2,2,2,2,2,0,1,1,1,1,1,1,2,2,1,0,0,0 },
	{2,2,2,2,2,2,0,0,1,2,2,1,2,2,1,2,1,1,1 },
	{2,2,2,2,2,2,0,1,1,1,1,2,1,1,2,1,1,2,1 },
	{2,2,2,0,0,0,0,1,1,1,1,1,2,1,2,2,1,1,1 },
	{0,0,0,1,1,1,0,0,1,0,0,1,2,2,2,1,1,2,1 },
	{2,2,0,0,1,0,0,1,1,0,2,0,1,1,2,1,1,1,0 },
	{2,2,0,1,1,1,0,0,0,0,2,0,1,1,1,2,1,0,0 },
	{2,2,0,0,1,1,0,1,1,1,0,0,0,1,2,2,1,0,2 },
	{2,2,0,0,0,1,1,2,2,1,1,0,0,1,2,2,1,0,2 },
	{2,0,0,1,1,1,1,1,2,2,1,1,1,2,2,2,1,0,2 },
	{0,0,1,2,2,2,1,1,1,2,1,2,1,2,2,1,0,2,2 },
	{1,0,1,2,1,2,2,1,2,2,2,1,2,1,2,1,0,2,2 },
	{1,0,1,1,2,2,1,1,2,2,2,2,1,2,1,0,0,2,2 },
	{1,1,1,2,1,2,1,2,1,2,2,1,1,1,0,0,2,2,2 },
	};
	//棋盘数据数据中：定义白色为0，黑色为1，空格为2；
	for (i=0;i<=18;i++)
	{
		k = qp[i][0];
		for (j=0;j<=18;j++)
		{
			c = qp[i][j];
			switch (c)
			{
			case 2:        //当变量棋子为空时；
				if (k==2)    //若行初始标的为空格；
				{
					sum[2]++;//空值寄存器+1
				}
				else//反之则意味着改行中前位标的棋子非空，则对应“由空入色亦为色”
				{
					sum[k]++;
				}
				break;
			case 0://变量棋子为白色				 
				 if (k == 0) //标的为白
				{
					sum[c]++;
				}
				else if (k == 2)//若行初始标的为空格
				{
					sum[c] = sum[c] + sum[2] + 1;//该语句意味“由空入色”则“空亦作色”
					k = c;//棋子寄存器变换
					sum[2] = 0;
				}
				else if (k==1)//标的为黑
				{
					sum[c]++;
					k = c;//出现黑白（白黑）变换
					sum[2] = 0;//清空空格寄存器
				}
				 break;
			case 1://变量棋子为黑色
				if (k==1)
				{
					sum[c]++;
				}
				else if (k == 2)
				{
					sum[c] = sum[c] + sum[2] + 1;
					k = c;
					sum[2] = 0;
				}
				else if (k == 0)
				{
					sum[c]++;
					k = c;
					sum[2] = 0;
				}
				break;
			default:
				printf("棋盘数据有误，请重新输入\n");
			}//你好这里是swich结束；
	
		}
	}//这里是外循环结束
	if (sum[1]-pb>sum[0])
		printf("黑方胜利，黑方胜子%f", (sum[1]-sum[0])-pb);
	else if (sum[1]<sum[0]+pb)
	{
		printf("白方胜利，白方胜子%f", (sum[0]+pb)-sum[1]);
	}
	else
	{
		printf("和棋！！\n");
	}
	return 0;
}