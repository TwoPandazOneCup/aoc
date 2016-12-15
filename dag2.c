#include <stdio.h>

int main (void)
{
	char c;
	short unsigned int tal = 5;

	while((c = getchar()) != EOF)
	{
		if(c == 'S')
			tal = tal + 1;
		if(c == 'R' && tal % 3 != 0)
			tal += 1;
		if(c == 'D' && tal < 7)
			tal += 3;
		if(c == 'U' && tal >= 4)
			tal -= 3;
		if(c == 'L' && ((tal-1) % 3) != 0 )
			tal -= 1;
		printf("%d",tal);
	}
}
