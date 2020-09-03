#include<stdio.h>
int main()
{
	float f;
	scanf_s("%f", &f);
	if (f >= 32) printf("%f", 5 * (f - 32) / 9);
	else printf("Too cold to live");
	return 0;
}