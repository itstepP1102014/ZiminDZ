#include <stdio.h>
#include <stdlib.h>

int main()

{
	double weight_Jack, weight_Wiliam, weight_Sue, weight_Judith;
	

	printf("Enter changes weight in kg with an accuracy of gram for Jack: \n");
	scanf("%lf", &weight_Jack);

	printf("Enter changes weight in kg with an accuracy of gram for Wiliam: \n");
	scanf("%lf", &weight_Wiliam);

	printf("Enter changes weight in kg with an accuracy of gram for Sue: \n");
	scanf("%lf", &weight_Sue);

	printf("Enter changes weight in kg with an accuracy of gram for Judith: \n");
	scanf("%lf", &weight_Judith);


	printf("Jack\t|\t%+0.3f\n", weight_Jack);
	printf("Wiliam\t|\t%+0.3f\n", weight_Wiliam);
	printf("Sue\t|\t%+0.3f\n", weight_Sue);
	printf("Judith\t|\t%+0.3f\n", weight_Judith);

	return 0;

}
