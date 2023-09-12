
#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c;
    	printf("Enter valueof a:");
    	scanf("%lf", &a);
	printf("Enter value of b:");
    	scanf("%lf", &b);
	printf("Enter value of c:");
    	scanf("%lf", &c);

	if(a==0){
	printf("value bill infinty");
	return 1;
}
    
    double x,y,z;// holding value
    double radical;
    double numerator;// holding square of function 
    double ansone;
    double anstwo;
    
	x = b * b;
	y = 4*a*c;
	z = x-y;
	
	if(z<0){
	printf("Roots are complex");
	return 1;
}

   radical = sqrt(z);

   numerator = -b - radical;
   ansone = numerator / (2*a);
   
   numerator = -b + radical;
   anstwo = numerator / (2*a);
    
    	printf("%.2lf", ansone);
	printf("%.2lf", anstwo);

    return 0;
}// end main
