//size of datatypes
#include<stdio.h>
int main()
{
    int a;
    double b;
    float c;
    char d;
    unsigned int e;
    long f;
    long long g;
    printf("%zu %zu %zu %zu %zu %zu %zu ",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g));
    return 0;
}