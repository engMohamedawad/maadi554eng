#include <stdio.h>
#define MACRO 4

int main(void)
{
	int x=10,y=0;
	y = MACRO + x;
	while(1)
	{
		printf("y=%d\n",y);
	}
	return 0;
}