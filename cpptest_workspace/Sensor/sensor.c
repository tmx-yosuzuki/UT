#include "sensor.h"


int mytest(int val)
{
	int ret = 0;

	if (val > 0)
	{
		ret = val;
	}

	if (val == 1000)
	{
		return -1;
	}

	return ret;
}

