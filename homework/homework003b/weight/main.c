#include <stdio.h>
#include <stdlib.h>
#include "../../../modules/include/compatibility.h"

int main()

{
    double weight_Jack, weight_Wiliam, weight_Sue, weight_Judith;
    double weight_Jack2, weight_Wiliam2, weight_Sue2, weight_Judith2;


    printf("Enter changes weight in kg with an accuracy of gram for Jack: \n"
           "weight before: \n");
    scanf("%lf", &weight_Jack);
    printf("Weight after: \n");
    scanf("%lf", &weight_Jack2);

    printf("Enter changes weight in kg with an accuracy of gram for Wiliam: \n"
           "weight before: \n");
    scanf("%lf", &weight_Wiliam);
     printf("Weight after: \n");
     scanf("%lf", &weight_Wiliam2);

    printf("Enter changes weight in kg with an accuracy of gram for Sue: \n"
           "weight before: \n");
    scanf("%lf", &weight_Sue);
     printf("Weight after: \n");
     scanf("%lf", &weight_Sue2);

    printf("Enter changes weight in kg with an accuracy of gram for Judith: \n"
           "weight before: \n");
    scanf("%lf", &weight_Judith);
     printf("Weight after: \n");
     scanf("%lf", &weight_Judith2);

    universalClear();
    printf("Jack\t| %-+0.3f\n", weight_Jack2 - weight_Jack);
    printf("Wiliam\t| %-+0.3f\n", weight_Wiliam2 - weight_Wiliam);
    printf("Sue\t| %-+0.3f\n", weight_Sue2 - weight_Sue);
    printf("Judith\t| %-+0.3f\n", weight_Judith2 - weight_Judith);

    return 0;

}
