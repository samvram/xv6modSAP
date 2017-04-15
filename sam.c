#include "types.h"
#include "stat.h"
#include "user.h"
 
//Made a new execute like command named sam
//Type sam followed by the user program to be executed to execute it

int main(int n,char *argv[])
{
 
 printf(1,"Executing %s now \n",argv[1]);
 exec(argv[1],&argv[1]);
 exit();
}
