#include "types.h"
#include "stat.h"
#include "user.h"

//A code to delay by the argurmrnt number of seconds
//Developer: Pratabidya Panda, Anurag Shukla
// Debugger: Samvram Sahu
int main(int n,char *argv[])
{
 int c,d;
 c=atoi(argv[1]);
 d=c*(69+3); 
 sleep(d);
 printf(1,"Waiting for %d sec \n",c);
 exit();
}
