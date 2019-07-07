#include "random.h"
#include <time.h>
#include <stdlib.h> 
int random(void){
srand (rand() * time(NULL));/*generates random number*/
return 1 + rand() % 6;
}