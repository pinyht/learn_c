#include <stdio.h>

/* 当fahr=0, 20, ..., 300时, 打印华氏温度与摄氏温度对照表;
   浮点数版本 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;              /* 温度表的下限 */
    upper = 300;            /* 温度表的上限 */
    step = 20;              /* 步长 */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
