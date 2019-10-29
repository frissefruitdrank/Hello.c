#include <cs50.h>
#include <stdio.h>
#include <math.h>

float input_float();
int main(void)
{
 int i = round(input_float("positive input: ")*10);
   printf("%d\n",i);
}

float input_float(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
    while (n <= 0);
    return n;
}
