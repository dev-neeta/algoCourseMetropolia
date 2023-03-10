//#include <stdio.h>
#include <iostream>
using namespace std;

long power(int x, unsigned n)
{
    // initialize result by 1
    long pow = 1L;

    // multiply `x` exactly `n` times
    for (int i = 0; i < n; i++)
    {
        pow = pow * x;
    }

    return pow;
}

int main(void)
{
    int x = -2;
    unsigned n = 10;

    //printf("pow(%d, %d) = %d", x, n, power(x, n));
     cout<<"pow("<<x<<", "<<n<<")"<<"= "<<power(x,n)<<endl;

    return 0;
}