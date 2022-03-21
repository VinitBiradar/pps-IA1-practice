#include<stdio.h>

struct _complex
 {
    float real,imaginary;
};
typedef struct _complex Complex;
struct _complex a;
Complex a; // No global variables
void input(Complex *pc1, Complex *pc2)
{
  printf("Enter a complex number\n");
  scanf("%f %f",&pc1->real, &pc1->imaginary);
  scanf("%f %f",&pc2->real, &pc2->imaginary);
 
}
Complex add_complex(Complex c1, Complex c2)
{
  Complex c3;
  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;
  return c3;
}
void output(Complex c1, Complex c2, Complex c3)
{
  printf("(%f+i%f) + (%f+i%f) is (%f+i%f)\n",c1.real, c1.imaginary,c2.real,c2.imaginary,c3.real,c3.imaginary);
}
int main()
{
  Complex c1,c2,c3;
  input(&c1,&c2);
  c3 = add_complex(c1,c2);
  output(c1,c2,c3);
  return 0;
}  