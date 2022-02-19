#include <stdio.h>
int main()
{
  int L,B,W,C,area,narea,tarea,nL,nB,cost;
  scanf("%d%d%d%d",&L,&B,&W,&C);
  area=L*B;
  nL=L+(2*W);
  nB=B+(2*W);
  narea=nL*nB;
  tarea=narea-area;
  cost=C*tarea;
  printf("%d",cost);
}