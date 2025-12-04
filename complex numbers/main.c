#include "complex_numbers.h"
#include <stdio.h>
#include "math.h"

int main()
{
    complex_t num1 = {4.0, 7.0};
    complex_t num2 = {8.0, 3.0};
    complex_t result_add = c_add(num1, num2);
    complex_t result_sub = c_sub(num1, num2);
    complex_t result_mul = c_mul(num1, num2);
    complex_t result_div = c_div(num1, num2);
    complex_t result_exp = c_exp(num1);
    complex_t result_con = c_conjugate(num1);
    double    result_abs = c_abs(num1);
    double    result_real = c_real(num1);
    double    result_imag = c_imag(num1);


    printf("ADDITION:       %.2f + %.2fi\n", result_add.real, result_add.imag);
    printf("SUBRACTION:     %.2f - %.2fi\n", result_sub.real, result_sub.imag);
    printf("MULTIPLICATION: %.2f * %.2fi\n", result_mul.real, result_mul.imag);
    printf("DIVISION:       %.2f / %.2fi\n", result_div.real, result_div.imag);
    printf("EXPONENTION:    %.2f + %.2fi\n", result_exp.real, result_exp.imag);
    printf("CONJUGATE:      %.2f%.2fi\n", result_con.real, result_con.imag);
    printf("ABSOLUTE:       %.2f\n", result_abs);
    printf("ABSOLUTE:       %.2f\n", result_real);
    printf("ABSOLUTE:       %.2fi\n", result_imag);
}

