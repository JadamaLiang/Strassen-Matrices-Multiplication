#include <stdio.h>

const int max_n = 10000;

int matrix_1[max_n][max_n], matrix_2[max_n][max_n];	
int strassen[max_n][max_n];
int N;

void mul()			//矩阵乘法函数 
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				strassen[i][j] += matrix_1[i][k] * matrix_2[k][j];
			}
		}
	}
}

int main()
{
	printf("请输入两个矩阵的大小：");
	scanf("%d", &N);			//输入矩阵大小 
	printf("\n请输入第一个矩阵\n");
	
	for (int i = 0; i < N; i++)			//行数 
	{
		for (int j = 0; j < N; j++)		//列数 
		{
			scanf("%d", &matrix_1[i][j]);		//输入矩阵 
		}
	}
	
	printf("\n请输入第二个矩阵\n");	
	
	for (int i = 0; i < N; i++)			//行数 
	{
		for (int j = 0; j < N; j++)		//列数 
		{
			scanf("%d", &matrix_2[i][j]);		//输入矩阵 
		}
	}
	
	mul();		//矩阵相乘 
	
	printf("\nStrassen矩阵为:\n");
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", strassen[i][j]);		//输出矩阵 
		}
		
		putchar(10);
	}
	
	return 0;
}





