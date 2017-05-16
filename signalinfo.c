#include "types.h"
#include "stat.h"
#include "user.h"

//A code to change ptable duration value
//Developer: Pratabidya Panda, Anurag Shukla
// Debugger: Samvram Sahu
int main(int n,char *argv[])
{
 int c,d;
 c=atoi(argv[1]);
 d=atoi(argv[2]); 
 printf(1,"Process %d ; duration %d sec \n",c,d);
 chjd(c,d);
 exit();
}
