#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int storstAv(int x, int y, int z)
{
	if(x > y && y > z)
		return x;
	else if ( y > x && y > z)
		return y;
	else return z;
}
int erTrekant(int x, int y, int z)
{
	if(x < y+z && y < x+z && z < y+x)
		return TRUE;
	return FALSE;
}
int main(void)
{
	FILE * pFile;
	int c;
	int nr = 0;
	int i = 0;
	int feil = 0;
	int ii = 0;
	int sum = 0;
	int tom[3] = {0,0,0};
	int triangel[3][3]= {0,0,0};
	char tal[3] = {0,0,0};
	
	pFile = fopen("input", "r");
	while((c = fgetc(pFile)) != EOF)
	{
		if(c >= 48 && c <= 57)
		{	
			tal[i] = c;
			++i;
		}
		else 
		{
			i = 0;
			
			int x = atoi(tal);
			if (x != 0)
			{
				triangel[nr][ii] = x;
				tal[0] = 0;
				tal[1] = 0;
				tal[2] = 0;	
				++ii;
			}
		}
		if (c == '\n' && nr  <= 2)
		{
			ii = 0;
			++nr;
		}
		else if ( nr == 3)
		{

			for (int v = 0; v <= 2; ++v)
			{
				if((erTrekant(triangel[0][v],triangel[1][v],triangel[2][v]))  == TRUE)
					sum += 1;
				else feil += 1;
				
				printf("%d %d %d \t%d %d\n" ,triangel[0][v], triangel[1][v], triangel[2][v],sum,feil);
			}	 
			nr = 0;
			printf("\n");
		   	ii = 0;
		}
	}		
	printf("%d\n",sum);
	return 0;
}	 
