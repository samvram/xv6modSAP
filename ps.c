#include "types.h"
#include "stat.h"
#include "user.h"
 
//Code to print the program state
//Type ps which in turn calls syscall pstate( ) which calls cps( )

int main(int n,char *argv[])
{
 
 printf(1,"Executing cps( ) now \n");
 pstate( );
 exit();
}
