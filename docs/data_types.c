#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

int main(int argc, char const *argv[])
{
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("LLONG_MAX   :   %lld\n", LLONG_MAX);
    printf("LLONG_MIN   :   %lld\n", LLONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("ULLONG_MAX  :   %llu\n", ULLONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
    printf("FLT_MAX     :   %f\n", FLT_MAX);
    printf("FLT_MIN     :   %f\n", FLT_MIN);
    printf("DBL_MIN     :   %lf\n", DBL_MIN);
    printf("DBL_MAX     :   %lf\n", DBL_MAX);

    

    printf("\n");

    int a;
    long int b;
    long long int c;
    // long long long int c; // only long long exist

    printf("int: %d\n", sizeof(a));
    printf("long int: %d\n", sizeof(b));
    printf("long long int: %d\n", sizeof(c));
    
    float d;
    // long float e; // long float is double
    double e;
    long double f;
    // long long double g; // long long float = long double. do no more long allowed
    printf("float: %d\n", sizeof(d));
    printf("double: %d\n", sizeof(e));
    printf("long double: %d\n", sizeof(f));

    char g;
    // long char h; // long applies for numeric only
    printf("char: %d\n", sizeof(g));
    
    // bool h; //Boolean value declaration is deprecated

    // void h; //Void is not a complete data type
    
    unsigned int a1;
    unsigned long int b1;
    unsigned long long int c1;
    unsigned short int d1;
    
    printf("unsigned int: %d\n", sizeof(a1));
    printf("unsigned long int: %d\n", sizeof(b1));
    printf("unsigned long long int: %d\n", sizeof(c1));
    printf("unsigned short int: %d\n", sizeof(d1));

    unsigned char e1;
    printf("unsigned char:   %d\n", sizeof(e1));

    signed int a2;
    signed long int b2;
    signed long long int c2;
    
    printf("signed int: %d\n", sizeof(a2));
    printf("signed long int: %d\n", sizeof(b2));
    printf("signed long long int: %d\n", sizeof(c2));

    signed char d2;
    printf("signed char:   %d\n", sizeof(d2));

    short int a3;
    printf("short int:   %d\n", sizeof(a3));
    return 0;
}
