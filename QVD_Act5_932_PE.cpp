#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


//Quiros Vicencio Diego Demian
//09/09/23
//Actividad 5:Secuencia de numeros/Generar numeros aleatorios y determinar si sin pares o impares
//Generar aleatoriamente cierta cantidad de digitos y analizar cual es el menor y cual es el mayor
//Ingresar un numero y generar la tabla de multiplicar

//Prototipos
int msges();
void menu();
void secuencia (void);
void paresOimpares (void);
void Digitos (void);
void Tablas (void);
//************************
int main()
{
    menu();

    return 0;
}
//desarrollo de las funciones
int msges()
{ int op;
  
  printf ("   M  E   N   U \n");
  printf("1.- SECUENCIA DE NUMEROS \n");
  printf("2.- Pares o Impares \n");
  printf("3.- DIGITOS \n");
  printf("4. Tablas de multiplicar\n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&op);
  return op;
}

void menu()
{
  int op;
  do{
      op=msges();
      
      switch (op)
      {
        case 1:
              secuencia();
              break;
        case 2:
              paresOimpares();
              break;
        case 3:
              Digitos();
              break;
        case 4:
            Tablas();
            break;
      }
    }while (op != 0);
}

void secuencia(void)
{
    int i,n;

    printf("Ingresa un numero: ");scanf("%d",&n);

    for ( i=n-1; i > 0; i--)
    {
        printf(" %d ",i);
    }
    printf("\nSecuencia");

}

void paresOimpares(void)
{
    srand(time(NULL));
    int pares=0,impares=0,num,i;
    int sum=0,sumpares=0,sumimpares=0;

    for (i = 1; i <= 40 ; i++)
    {
        num=rand()%200;
        if (num%2==0)
        {
            printf(" %d es par\n",num);

            pares++;
            sumpares+=num;
        }
        else
        {
            printf(" %d es impar\n",num);

            impares++;
            sumimpares+=num;
        }
        
    }

    printf("Impares: %d\n",impares);
    printf("Suma de Numeros impares= %d \n",sumimpares);
    printf("Pares: %d\n",pares);
    printf("Suma de Numeros Pares= %d \n",sumpares);
}

void Digitos(void)
{
    srand(time(NULL));

    int mayor,menor=200,i,num,aux,aux2;
    mayor=100;
    menor=200;

    for ( i = 0; i < N; i++)
    {
        num=(rand()%101)+100;
        printf("%d\n",num);       

        if (num<menor)
        {
            menor=num;
        }
        if (num>mayor)
        {
            mayor=num;
        }        

    }

    printf("Mayor: %d\n",mayor);
    printf("Menor: %d\n",menor);
}

void Tablas (void)
{
    unsigned int n;
    printf("Ingresa un numero (1-20): ");scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",i,n,i*n);
    }

}