#include "types.h"
#include "stat.h"
#include "user.h"

int nextProcessBirthTime(int m, int n)
{
int z = random(100)/99*(m-n)+n;
z=z*72;
return z;
}

int processRunTime(int m, int n)
{
int z = random(100)/99*(m-n)+n;
z=z*72;
return z;
}

int main(int n,char *argv[])
{
 //User program to reate processes randomly
 //First arguement is minimum gap between two processes
 //Second arguement is maximum gap between two processes
 //Third arguement is the minimum run time of a process
 //Fourth arguement is the maximum run time of the processes
 //Fifth arguement is the maximum number of processes

 int maxp=atoi(argv[5]);
 int maxrun=atoi(argv[4]);
 int maxwait=atoi(argv[2]);
 int minrun=atoi(argv[3]);
 int minwait=atoi(argv[1]);
 int i, sleeper, snooze,pi;
 
for(i=0;i<maxp;i++)
 {
  //snooze=random(100)/99*(maxwait-minwait)+minwait;
  snooze=nextProcessBirthTime(maxwait,minwait); 
  sleep(snooze);
  pi=fork( );
  if(pi<0)
    printf(1,"\n Fork failed \n");
  else if(pi>0)
    {
      printf(1,"\n Parent %d creating child %d \n",getpid( ),pi);
      wait( );
    }
  else
    {  
       printf(1,"Child %d created \n",getpid( ));
       //sleeper=random(100)/99*(maxrun-minrun)+minrun;
       chjd(getpid( ),(maxrun+minrun)/2);
       sleeper=processRunTime(maxrun,minrun); 
       sleep(sleeper);
       break;
     }
 }
 //exec("ps",argv);
 exit();
}
