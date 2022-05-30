#include <math.h>
float Triangle(float x, float y, float z)
{
	float p = (x + y + z) / 2;
	return sqrtf(p*(p-x)*(p-y)*(p-z));
}