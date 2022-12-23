//practicing functions 
//f(x) = 2x +5
#include <stdio.h>

int myFunction( int x)
{
    return x*x;
}
// we can define a function as follow:
//double test(int a, float b, char c)
//Notice the input can be anything, but the output is only Double
double myFloat(float y, float w)
{
    return (2*y+ w);
}
//Return statement.
// remember the only type of return that we can use with void
// is just the word return. Your program doesn't do anything after return
void hichi(char name[])
{
    printf("Hello %s", name);
    return;

}

char myChar( char z)
{
    return z;
}
int main()
{
    
    printf("%f \n", myFloat(3.2, 5));
    printf("%d \n", myFunction(3));
    float sum;
    sum = myFloat(3.2, 5) + myFunction(3);
    printf("sum = %f\n", sum);
}