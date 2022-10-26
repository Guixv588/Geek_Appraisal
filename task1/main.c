#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double a,h=0.001,x=0,f=1.0,n=0,m=0;
	/*scanf("%lf",&a);*/
	a=2;
	
	printf("x=%f y=%f\n",x,a);
	f*=(1.0-h+h*h/2.0);
	n=f*a;
	x+=h;
	printf("x=%f y=%f\n",x,n);
	f*=(1.0-h+h*h/2.0);
	m=f*a;
	x+=h;
	printf("x=%f y=%f\n",x,m);
	while(n-m>=0.00001){
		n=m;
		f*=(1.0-h+h*h/2.0);
		m=f*a;
		x+=h;
		printf("x=%f y=%.17f\n",x,m);
	}

	return 0;
}

