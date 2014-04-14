#include <stdio.h>
#include <stdlib.h>
#define TAM 5



int main()
{
  int v[TAM]= {2,4,8,10,80},*pv=v,n;
  /*Ej 22
  printf("Ingrese la posicion buscada: ");
  scanf("%d",&ps);
  printf("Ingrese el valor a insertar: ");
  scanf("%d",&n);
  pv+=(ps-1);
  *pv=n;
  printf("Valor en la posicion %d: %d", ps, *pv);
  */
  int i=0, j, aux, aux2;
  printf("Ingrese el elemento: ");
  scanf("%d",&n);
  /*while(n>=*pv&&i<TAM)
  {pv++;
   i++;
  }*/
  while(n>=*pv&&i<TAM)
  {
    pv++;
    i++;
  }
  aux=*pv;
  *pv=n;
  pv++;
  for(j=(i+1);i<TAM;i++)
  {
    aux2=*(pv);
    *(pv)=aux;
    aux=aux2;
    pv++;
  }
  printf("Orden: %d %d %d %d %d", v[0], v[1], v[2], v[3], v[4]);
  return 0;
}
