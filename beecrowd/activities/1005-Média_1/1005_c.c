
#include <stdio.h>
 
int	main()
{
	double	a;
	double	b;
	double	med; 
	double	med_1;

	med = 0;
	med_1 = 0;
	scanf("%lf", &a);
	scanf("%lf", &b);

	med_1 = ((a * 3.5) + (b * 7.5));
	med = med_1 / 11;
	printf("MEDIA = %.5lf\n", med);

	return (0);
}