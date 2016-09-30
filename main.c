#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "header.h"
#include "object.h"

void montreal()
{
	printf("%s\n", __func__);
}
void gatineau(int a)
{
	printf("%s a=%d\n", __func__, a);
}

void trois_riviere(int a, int b)
{
	printf("%s a=%d, b=%d\n", __func__, a,b);
}

void sherbrooke(int a, short b)
{
	printf("%s a=%d, b=%d\n", __func__, a,b);
}

void victoriaville(int a, int b, char * c)
{
	printf("%s a=%d, b=%d, c=%s\n", __func__,a,b,c);
}

static inline void saguenay(int a)
{
	a+=1212;
	printf("%s a=%d\n", __func__,a);
}
//inline int gaspe(int a)
int gaspe(int a)
{
	printf("%s a=%d\n", __func__,a);
	return a*a;
}


volatile int x =1;
int main()
{
	srand(time(NULL));
	x = rand()%100;
	int y = (x*rand())%23;
	char * z = "string";
	printf("%s\n", __func__);
	montreal();
	gatineau(x);
	trois_riviere(x,y);
	victoriaville(x,y,z);
	sherbrooke(1818, 1337);
	gaspe(x);
	saguenay(x);
	toronto(x*x);
	washington(x*x);

	return 0;
}
