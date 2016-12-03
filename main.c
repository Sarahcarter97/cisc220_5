#include <stdlib.h>
#include <stdio.h>
#include "udll.h"

int main(){
        union Data testData;
        testData.i = 6;
  
        insert(9,testData);
        printf("Length before removal: %d\n", length());
  
        removeNode(1);
        printf("Length after removal: %d\n", length());
        
        printf("First value: %d\n", get(0));
  
        return 0;
}
