#include "object.h"
#include <stdio.h>

void washington(int a)
{
	a+=1337;
	printf("%s a=%d\n",__func__,a);
}
