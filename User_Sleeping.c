#include "types.h"
#include "stat.h"
#include "user.h"

int main(int n,char *argv[])
{
 int c,d;
 c=(atio)argv[1];
 d=c*10000/145;
 sleep(d);
 printf(1,"Waiting for %d \n",c);
 exit();
}
