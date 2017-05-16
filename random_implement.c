#include "types.h"
#include "stat.h"
#include "user.h"
 
//Made a new random number caller
//Type random to see a random number

int main(int n,char *argv[])
{
 printf(1,"Random number: %d\n",random(atoi(argv[1])));
 exit();
}
