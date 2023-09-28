#include <stdio.h>
#include <float.h>

int main()
{
    //max value for float
    printf("FLT_MAX %.8e\n", FLT_MAX);
    //min value for float
    printf("FLT_MIN %.8e\n\n", FLT_MIN);

    //max value for double
    printf("DBL_MAX %.16e\n", DBL_MAX);
    //min value for double
    printf("DBL_MIN %.16e\n\n", DBL_MIN);

    //max value for long double
    printf("LDBL_MAX %.20Le\n", LDBL_MAX);
    //min value for long double
    printf("LDBL_MIN %.20Le\n\n", LDBL_MIN);

    //float type accuracy
    printf("FLT_DIG %d\n", FLT_DIG);
    //double type accuracy
    printf("DBL_DIG %d\n", DBL_DIG);
    //long double type accuracy
    printf("LDBL_DIG %d\n\n", LDBL_DIG);

    //the number of bits in a float type mantissa
    printf("FLT_MANT_DIG %d bits\n", FLT_MANT_DIG);
    //the number of bits in a double type mantissa
    printf("DBL_MANT_DIG %d bits\n", DBL_MANT_DIG);
    //the number of bits in a long double type mantissa
    printf("LDBL_MANT_DIG %d bits\n\n", LDBL_MANT_DIG);

    return 0;
}
