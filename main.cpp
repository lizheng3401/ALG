#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int Fun(int n)
{
	int s=1;
	if(n==0) return 1;
	for(int i=1;i<=n;i++)
		s*=i;
	return s;
}
int main()
{
	double e=0;
	int i;
	printf("n e\n");
	printf("- -----------\n");
	for(i=0;i<=9;i++)
	{
		double s;
		s=1/(double)Fun(i);
		e+=s;
		if(i==0 || i==1)
			printf("%d %.0lf\n",i,e);
		else if(i==2)
			printf("%d %.1lf\n",i,e);
		else
			printf("%d %.9lf\n",i,e);
	}
	return 0;
}
