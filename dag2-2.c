#include <stdio.h>
#define TRUE 1
#define FALSE 0

int ovste (int x)
{	int rekke[] = {1, 2, 4, 5, 9};
	int i = 0;  	
	while(rekke[i] != '\0')
	{
		if(rekke[i] == x)
			return 1;
		
		++i;
	}
	return 0;

}
int nederste(int x)
{
	int rekke[] = {5,10,13,12,9};
	int i = 0;  	
	while(rekke[i] != '\0')
	{
		if(rekke[i] == x)
			return 1;
		
		++i;
	}
	return 0;

}
int venstraste(int x)
{
	int rekke[] = {1,2,5,10,13};
	int i = 0;  	
	while(rekke[i] != '\0')
	{
		if(rekke[i] == x)
			return 1;
		
		++i;
	}
	return 0;
}
int hogerest(int x)
{
	int rekke[] = {1,4,9,12,13};
	int i = 0;  	
	while(rekke[i] != '\0')
	{
		if(rekke[i] == x)
			return 1;
		
		++i;
	}
	return 0;
}
int main (void)
{
	char c;
	short unsigned int tal = 5;

	while((c = getchar()) != EOF)
	{
		if(c == 'R' && (hogerest(tal) == FALSE))
			tal += 1;
		if(c == 'D' && (nederste(tal) == FALSE))
			if (tal == 1 || tal == 0xb)
				tal += 2;
			else
				tal += 4;
		if(c == 'U' && (ovste(tal) == FALSE))
			if( tal == 0xd || tal == 3)
				tal -= 2;
			else
				tal -= 4;
		if(c == 'L' && (venstraste(tal) == FALSE))
			tal -= 1;
		printf("%x\n",tal);
	}

}
