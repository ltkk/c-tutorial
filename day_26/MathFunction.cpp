#include <math.h>
#include <stdio.h>

const float PI = 3.14;

int main()
{
    // tính sin
    int d = 30; // 30 độ
    printf("\nsin(%d) = %.2f", d, sin(30 * PI / 180));

    // tính exp
    double param, result;
    param = 5.0;
    result = exp(param);
    printf("\nThe exponential value of %f is %f.\n", param, result);

    // tính log cơ số e
    param = 5.5;
    float newResult = log(result);
    printf("\nlog(%f) = %f\n", result, newResult);


    // lũy thừa: 2^4
    printf("\n2^4 = %d", int(pow(2,4)));

    // tìm căn bậc 2 của 225
    printf("\nsqrt(225) = %f", sqrt(225));

    // làm tròn lên
    printf ( "\nceil of 2.3457 is %.f\n", ceil(2.3457) );
    printf ( "\nceil of 3.8 is %.f\n", ceil(3.8) );
    printf ( "\nceil of -2.3 is %.f\n", ceil(-2.3) );
    printf ( "\nceil of -3.8 is %.f\n", ceil(-3.8) );
    // int(2.3 + 1) = 3

    // trị tuyệt đối
    printf ("\nThe absolute value of 3.1416 is %f\n", fabs (3.1416) );
    printf ("\nThe absolute value of -10.6 is %f\n", fabs (-10.6) );
 
    printf ("\nThe absolute value of 3 is %d\n", abs (3) );
    printf ("\nThe absolute value of -10 is %d\n", abs (-10) );

}