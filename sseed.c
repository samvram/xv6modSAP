#include "types.h"
#include "stat.h"
#include "user.h"	
 
//Made the set seed caller 
//Takes input the seed value from user and sets it;

int main(int n,char *argv[])
{
 int x;
 x=atoi(argv[1]);
 int y=setseed(x);
 if(y==0)
 printf(1,"\nThe seed has been set to %d \n",x);
 else
 printf(1,"\nError\n");
 exit();
}
