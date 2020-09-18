#include <stdio.h>
#include <math.h>
int main()
{
	int x, z, x_new1, z_new1, x_new2, z_new2, length;
	printf("输入x,z\n");
	scanf("%d,%d", &x, &z);
	length = x * x + z * z;
	length = sqrt(length);
	x_new1 = 768 * x / length;
	z_new1 = 768 * z / length;
	x_new2 = 1024 * x / length;
	z_new2 = 1024 * z / length;
	printf("迁移后的最近点为%d,y,%d,迁移后的最远点为%d,y,%d", x_new1, z_new1, x_new2, z_new2);
	return 0;
}
