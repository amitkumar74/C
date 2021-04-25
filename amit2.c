#include<stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	float y;
	char z;
	double p;
	x=20;
	y=2e1;
	z='a';
	p=3.2e20;
	printf("\n%d %10.2f%c %.21f",x,y,z,p);

	return 0;

}