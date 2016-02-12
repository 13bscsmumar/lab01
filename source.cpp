#include <iostream>
#include <stdio.h>
#define MAX 100;
#define MIN 0;
#define size 4;
//using namespace std;
int **A;



int **B;
	
int **C;


void matrixMult(int **A,int **B)
{
	C = new int *[4];
	for(int i = 0; i <4; i++)
		C[i] = new int[4];

	for (int i = 0; i<4;i++){
		for (int j = 0;j<4;j++){
			C[i][j] = 0;
		}
	}
		for (int k = 0; k<4;k++){
			for (int i = 0; i<4;i++){
				for (int j = 0;j<4;j++){
					C[i][j] += A[i][k] * B[k][j];
				}
			}
		}
		 printf("\n\n\n");
	/*	for (int i = 0;i<4;i++)
		{
			for (int j = 0;j<4;j++)
			{
				printf("%d \t",C[i][j]);
			}
			printf("\n");
		}*/
	


}
void UnitTestmatrixMult(){
 int X[3][3] =
    {
        {2,2,2},
        {2,2,2},
		{2,2,2}
    };
 int y[3][3] =  {
        {2,2,2},
        {2,2,2},
		{2,2,2}
    };

  int expectedOutput[3][3] =  {
        {12,12,12},
        {12,12,12},
		{12,12,12}
    };
  matrixMult(X,y);

}
int main ()
{

A = new int *[4];
for(int i = 0; i <4; i++)
	A[i] = new int[4];

B = new int *[4];
	for(int i = 0; i <4; i++)
		B[i] = new int[4];
	

	for (int i = 0;i<4;i++)
	{
		for (int j = 0;j<4;j++)
		{
			A[i][j]= 2;// rand() % 100; 
			B[i][j]= 2;// rand() % 100; 
		}
	}

	for (int i = 0;i<4;i++)
	{
		for (int j = 0;j<4;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");

	for (int i = 0;i<4;i++)
	{
		for (int j = 0;j<4;j++)
		{
			printf("%d \t",B[i][j]);
		}
		printf("\n");
	}
	
	matrixMult(A,B);

	for (int i = 0;i<4;i++)
	{
		for (int j = 0;j<4;j++)
		{
			printf("%d \t",&result[i][j]);
		}
		printf("\n");
	}


	return 0;

}
