#include "std_lib_facilities.h"

void kiir (double tb[])
{
 int i;
 for (i=0; i<4; i++)
  cout <<"PageRank ["<<(i+1)<<"]: "<<tb[i]<<"\n";
}

double tav(double pagra[],double pagrav[])
{
 double ossz = 0.0;
 int i;
 for (i=0; i<4; i++)
  ossz +=abs(pagra[i] - pagrav[i]);
 return ossz;
}

int main(void)
{
 double l[4][4] = {
  {0.0, 0.0, 1.0 / 3.0, 0.0},
  {1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
  {0.0, 1.0 / 2.0, 0.0, 0.0},
  {0.0, 0.0, 1.0 / 3.0, 0.0}
 };

 double PR[4] = {0.0, 0.0, 0.0, 0.0 };
 double PRv[4] = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

 int i,j;

 for(;;)
  {
   for(i=0; i<4; i++)
    PR[i] = PRv[i];
   for (i=0; i<4; i++)
    {
     double tp=0;
     for(j=0; j<4; j++)
      tp += l[i][j]*PR[j];
     PRv[i]=tp; 
    }

   if (tav (PR, PRv) < 0.0000000001)
    break;
  }
 kiir (PR);
 return 0;
}
