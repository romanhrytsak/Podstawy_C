#include <stdio.h>
#include "my_library.h"

int main(){

int array[]={2,4,5,6,7};


printf(" %d, \n",(int)(sizeof(array)/sizeof(int)));
printTable(array);

return 0;
}
