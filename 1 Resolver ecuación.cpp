#include <stdio.h>
#include <math.h>
int main(void) {
	double a,b,c,r1,r2,raiz;
	printf("-Ingrese el valor de a: ");
	scanf("%lf",&a);
	printf("-Ingrese el valor de b: ");
	scanf("%lf",&b);
	printf("-Ingrese el valor de c: ");
	scanf("%lf",&c);
	

	if((b*b)-(4*a*c) < 1){
		printf("\n¡¡ERROR!!-solucion compleja\n");
	}
	else{
	raiz=sqrt(b*b-4*a*c);
	r1=((-b+raiz)/2*a);
	r2=((-b-raiz)/2*a);
	printf("Los valores de las ecuaciónes son x1= %lf y x2= %lf",r1,r2);
	}

	return 0;
}
