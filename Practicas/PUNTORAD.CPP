#include <stdio.h>
#include <conio.h>
#include <math.h>

void anillo(void);
float leer(void);
float radio(float,float);

void main(void)
  {
   clrscr();
   anillo();
   getch();
  }

void anillo(void)
  {
   int z;
   float r1,r2,x,y,r;
   printf("\n\n\t\tIngrese valor de R1:\n\t\t");
   r1=leer();
   printf("\n\t\tIngrese valor de R2:\n\t\t");
   r2=leer();
   printf("\n\t\tIngrese coordenada X del punto:\n\t\t");
   x=leer();
   printf("\n\t\tIngrese coordenada Y del punto:\n\t\t");
   y=leer();
   r=radio(x,y);
   z=r>=r1 && r<=r2;

   switch(z)
     {
      case 1:
	printf("\n\n\t\tEl punto (%.3f,%.3f)",x,y);
	printf("\n\t\tTiene un radio = %f",r);
	printf("\n\t\t Se encuentra dentro del anillo de radios: R1 = %f y R2 = %f",r1,r2);
	break;

      case 0:
	printf("\n\n\t\tEl punto (%.3f,%.3f)\n",x,y);
	printf("\n\t\tTiene un radio = %f\n",r);
	printf("\n\t\tSe encuentra fuera del anillo de radios: R1 = %f y R2 = %f",r1,r2);
     }
  }

float leer(void)
  {
   float r;
   scanf("%f",&r);
   return(r);
  }

float radio(float x,float y)
  {
   float r;
   r=sqrt(x*x+y*y);
   return(r);
  }