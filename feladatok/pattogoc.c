#include<stdio.h>
#include<math.h>
#define SZEL 78
#define MAG 22

int putX(x,y)
{
 int i;
 for(i=0;i<x;i++)
  printf("\n");
 for(i=0;i<y;i++)
  printf(" ");
 printf("X\n");
return 0;
}

int main()
{
 long int x=0,y=0;
 while(1)
 {
  system("clear");
  putX(abs(MAG-(x++%(MAG*2))),abs(SZEL-(y++%(SZEL*2))));
  usleep(50000);
 }
return 0;
}
