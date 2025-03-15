#include <stdio.h>

/* calculate BMI and determine obesity status */

int main()
{
        int pounds, feet, inches;
        float weight, height, BMI;
        float p2k, i2m; /* pounds too kilograms, inches to meters */

        p2k = 0.454; i2m = 0.0254;

        pounds = 175;
        feet = 6;
        inches = 0;

        weight = (pounds * p2k);
        height = ((feet * 12) + inches)*i2m;

        BMI = weight/(height * height);

        printf("BMI: %.2f\n", BMI);

        return 0;

}
