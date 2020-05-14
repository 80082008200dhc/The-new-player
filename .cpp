#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,delt,x1,x2;
	scanf("%If%If%If",&a,&b,&c);
	delt=b*b-4*a*c;
	if(delt<0){
		printf("нч╫Б");
	return 0;}
	else {
	x1=(-b+sqrt(delt))/(2*a);
	x2=(-b-sqrt(delt))/(2*a);
printf("x1=%g\n",x1);
printf("x2=%g\n",x2);
	return o;}
return 0;
}
