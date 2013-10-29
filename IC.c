// Tarea 6
// Realizado por Miguel Aldana y Jesús Rincón  
// Fecha 22 de octubre de 2013

// Definir el main en la función. Este main posee 4 atributos de entrada.
// X0: el punto inicial en x de la partícula (double)
// y0: el punto inicial en y de la partícula (double)
// vz: Velocidad inicial en x (double)
// vy: velocidad inicial en y (double)


#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#define PI 3.1416


int main (int argc, char **argv){

// Código que asegura que hay cuatro argumentos de entrada en el problema

if(argc!= 4)
{

	printf ("El programa necesita más argumentos de entrada");
	exit (1);
	}
// definición de las variables de entrada

double x0;

double y0;

double vz;

double vy;

// inicialización de las constantes

x0=atof(argv[1]);

y0=atof(argv[2]);

vz=atof(argv[3]);

vy=atof(argv[4]);

// definición de los vectores posición y velocidad

double *x;// (Posición en x)

double *y; // (Posición en y)

double *vx; // (Velocidad en x)

double *vj; // (velocidad en y)

// Inicialización de vectores posición y velocidad

x= malloc(sizeof(double));
y= malloc(sizeof(double));
vx= malloc(sizeof(double));
vj= malloc(sizeof(double));

// Constantes de posición radial. Estas representan las órbitas del problema

double r0;

double r1;

double r2;

double r3;

double r4;


// inicialización de las posiciones radiales

r0= 50;

r1=r0/5;

r2=((2*r0)/5);

r3=((3*r0)/5);

r4=((4*r0)/5);

// Definición de constantes del problema (Nota, los valores reales se instalaran en la aplicación final del código)
double G;

double M;
G=1234;

M=10;

// Método para llenar vectores, se usa un for para llenar las coordenas de cada vector
int i;

for (i=0;i<12;i++){

x[-1]=x0;

x[i]=x0+ r1*cos((2*PI*i)/12);

vx[-1]=vz;

vx[i]= vz + sqrt((G*M)/r1)*sin((2*PI*i)/12);

y[-1]=y0;

y[i]= y0 + r1*sin((2*PI*i)/5);

vj[-1]=vy;

vj[i]=vy + sqrt((G*M)/r1)*cos((2*PI*i)/12);

}
for (i=12;i<30;i++)
{

x[i]= x0 + r2*cos((2*PI*(i-12)/18));

y[i]= y0 + r2*sin((2*PI*(i-12)/18));

vx[i]= vz + sqrt((G*M)/r2)*sin((2*PI*(i-12))/18);

vj[i]= vy + sqrt((G*M)/r2)*cos((2*PI*(i-12))/18);

}

for (i=30;i<54;i++){

x[i]= x0 + r3*cos((2*PI*(i-30)/24));

y[i]= y0 + r3*cos((2*PI*(i-30)/24));

vx[i]= vz + sqrt((G*M)/r3)*sin((2*PI*(i-30))/24);

vj[i]= vy + sqrt((G*M)/r3)*cos((2*PI*(i-30))/24);

}

for (i=54;i<84;i++){

x[i]= x0 + r4*cos((2*PI*(i-54)/30));

y[i]= y0 + r4*cos((2*PI*(i-54)/30));

vx[i]= vz + sqrt((G*M)/r4)*sin((2*PI*(i-54))/30);

vj[i]= vy + sqrt((G*M)/r4)*cos((2*PI*(i-54))/30);

}

for (i=84;i<120;i++){

x[i]= x0 + r0*cos((2*PI*(i-84)/36));

y[i]= y0 + r0*cos((2*PI*(i-84)/36));

vx[i]= vz + sqrt((G*M)/r0)*sin((2*PI*(i-84))/36);

vj[i]= vy + sqrt((G*M)/r0)*cos((2*PI*(i-84))/36);

}
return 0;
}


