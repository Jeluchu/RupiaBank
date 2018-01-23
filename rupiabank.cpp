#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio_ext.h>

#define N 3
#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

int leerNumero()
{
   int numero = -1;
   __fpurge(stdin);
   scanf("%i", &numero );
   return numero;
}


/*
void cuentacorriente()
{
  int cuentacorriente = rand()%1000000;

  printf("%i€\n",cuentacorriente);
}

void sacardinero()
{
  int cuentacorriente = rand()%1000000;

  double dinero, actual;

  printf("¿Cuánto dinero quieres sacar?\n");
  scanf(" %lf", &dinero);

  actual = cuentacorriente - dinero;

  printf("Su saldo actual es %i\n", actual);

} */


int main (void){

    int cuotas, numero = rand() % 1000000, OpcionM;
    float interes, pago_por_cuota, prestamo;

    printf("\n");
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

    printf("\n");
    system("toilet --gay -fpagga RUPIA BANK");
    printf("\n");


    sleep(1);
    printf(AMARILLO "|     Te damos la bienvenida ");
    printf("%s", getenv("USER"));
    printf("\n" NORMAL);
    sleep(1);
    printf(AZULETE "|     Cliente %i, inicio de proceso el %s\n" NORMAL, numero, output);
      printf("+---------------------------------------------------------------------+\n");
      sleep(1);
    printf("|     Pulsa" VERDE " 'ENTER' " NORMAL "para para comenzar");
    while(getchar()!='\n');

    system("clear");
    system("toilet -fpagga RUPIA BANK");
    printf("\n");

    printf(
    "+---------------------------------------------------------------------+\n"
    "|"      VERDE "\t\t¿Qué operación deseas realizar?" NORMAL     "\t\t\t      |\n"
    "+---------------------------------------------------------------------+\n"
    "|" NEGRITA "\t  Pulsa 1 " NORMAL "'Sacar dinero'" "\t\t\t\t      |\n"
    "|" NEGRITA "\t  Pulsa 2 " NORMAL "'Pedir un préstamo'"   "\t\t\t\t      |\n"
    "|---------------------------------------------------------------------|\n"
    "|" NEGRITA "\t  Pulsa 0 " NORMAL "si deseas salir" "\t\t\t\t      |\n"
    "+---------------------------------------------------------------------+\n");
    printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
    OpcionM = leerNumero();
    printf("+---------------------------------------------------------------------+\n");
    switch(OpcionM) {
    case 0:
           printf("\n");
           printf(NEGRITA "|     Gracias por tu confianza en 'Rupia Bank'\n" NORMAL
                  NEGRITA "|     ¡Muchísimas gracias " VERDE);
           printf("%s" NORMAL,getenv("USER"));
           printf("!");
           printf("\n" NORMAL);
           sleep(2);
           printf("\n");
           printf(NEGRITA "|     Esperamos que te haya sido de utilidad\n"
                  "|     ¡HASTA PRONTO!\n\n" NORMAL);
           sleep(2);
           system("toilet --gay -fpagga JÉLUCHU\n\n");
           printf("\n");
           return EXIT_SUCCESS;
    break;

    case 1:
    break;
  }
    /*
    printf("Tu saldo en la cuenta es: "); cuentacorriente();
    sacardinero();

    printf ("Introduzca el prestamo que desea: ");
    scanf ("%f", &prestamo);
    cuotas=3;
    if(prestamo<=5000)
        cuotas=5;
    if(prestamo<=1000)
        cuotas=1;
    if(prestamo>=1000&&prestamo<=3000)
        cuotas=2;
    interes=prestamo<4000?prestamo*0.1:prestamo*0.12;
    pago_por_cuota=(prestamo+interes)/cuotas;
    printf ("El número de cuotas será %i\n", cuotas);
    printf ("Valor de interes: %g\n", interes);
    printf ("Valor de pago por cuota: %g\n", pago_por_cuota);
    putchar ('\n'); */

    return EXIT_SUCCESS;
}
