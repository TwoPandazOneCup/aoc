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
	int i = 0;
	int ii = 0;
	int sum = 0;
	int tom[3] = {0,0,0};
	int triangel[3]= {0,0,0};
	char tal[4] = {0,0,0,0};
	
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
			printf("%s \t %d\n",tal,x);
			triangel[ii] = x;
			
				
			tal[0] = 0;
			tal[1] = 0;
			tal[2] = 0;
				
			++ii;
			}
		}
		if (c == '\n')
		{
			printf("sende %d, %d, %d, \n",triangel[0], triangel[1], triangel[2]);
			if ((erTrekant(triangel[0], triangel[1], triangel[2])) == TRUE)
				sum++;
		   

				   
				ii = 0;

		}
	}
	
							
				
				
	printf("%d\n",sum);
	return 0;
}	 

