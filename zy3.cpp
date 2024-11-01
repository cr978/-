#include<stdio.h>
int main()
{
	int a = 0;
	while (1) {
		printf("请输入你的成绩：");
		scanf_s("%d", &a);
		if (a < 0 || a>100) {
			printf("输入无效,");
			continue;
		}
		if (a >= 0 && a < 60) {
			printf("E");
		}
		if (a >= 60 && a < 70) {
			printf("D");
		}
		if (a >= 70 && a < 80) {
			printf("C");
		}
		if (a >= 80 && a < 90) {
			printf("B");
		}
		if (a >= 90 && a <= 100) {
			printf("A");
		}
	
	}
	return 0;
}