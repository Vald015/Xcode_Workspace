/* Sample program to handle system signals */

#include <signal.h>
#include <stdio.h>


void * signal_handler(int signumber)
{
   printf("\nTermination Signal Handled!!\n\n");

}

int main()
{
   signal( SIGINT, (void *)  signal_handler );

   while(1) {
	printf("Doing Nothing...\n");
	sleep(1000);
   }
}
