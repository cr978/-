#include<stdio.h>
int cax(int x, int y, int z)
{
	int hz = x;
	if (hz < y)
	{ 
		hz = y;
		if (hz < z)
		{ 
			hz = z;
			
		}
	}
	if (hz > y)
	{
		if (hz < z)
		{
			hz = z;
		}

	}
	return hz;

}

int main()
{
	int a, b, c = 0;
	printf("��������������");
	scanf_s("%d %d %d", &a, &b, &c);
	int hc = cax(a, b, c);
	printf("�����%d\n", hc);
	return 0;
}