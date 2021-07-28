#include <stdio.h>
#include <math.h>
typedef struct complex{
    float real;
    float imag;
}complex;
complex read_complex(complex a){
    printf("The Real Part Of The Complex Number Is : ");
    scanf("%f",&a.real);
    printf("The Imaginary Part Of The Complex Number Is : ");
    scanf("%f",&a.imag);
    return a;
}
void print_complex(complex a){
        if(a.imag>=0)
    printf("The Complex Number Is : %.f+%.fi\n",a.real,a.imag);
    else
    printf("The Complex Number Is : %.f%.fi\n",a.real,a.imag);
}
complex add(complex a, complex b)
{
      complex c;

      c.real = a.real + b.real;
      c.imag = a.imag + b.imag;

      return(c);
}
int compare_complex(complex a, complex b){
    float bmag,amag;
    bmag=pow(pow(b.real,2)+pow(b.imag,2),0.5);
    amag=pow(pow(a.real,2)+pow(a.imag,2),0.5);
    if (amag==bmag)
        return 0;
    else if (amag>bmag)
        return 1;
    else return -1;
}

void main(){
    complex a;
    complex b;
    complex c;
    a=read_complex(a);
    b=read_complex(b);
    print_complex(a);
    print_complex(b);
    c=add(a,b);
    print_complex(c);
    int x=compare_complex(a,b);
    printf("The Returned Value Is : %d",x);
}
