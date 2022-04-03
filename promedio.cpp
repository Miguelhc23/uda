#include<stdio.h>
#include<conio.h>

main()
{
int i;
float cal=0,suma=0,prom=0;
char nom[50];

printf("TECLEE SU NOMBRE: \t");
scanf("%s",&nom);
for(i=1; i<=5; i++)//es un ciclo finito
{
printf ("\n Teclee su calificacion\t");
scanf("%f", &cal);
suma=suma+cal;
}
prom=suma/5;
if(prom>=70)
printf("\nel promedio del alumno %s es de %.2f aprobado",nom,prom);
else
printf("\nel promedio del alumno %s es de %.2f reprobado",nom,prom);
getch();
return 0;
}
