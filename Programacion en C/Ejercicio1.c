#include <stdio.h>

int main(void) {
  int x,y;
  while( 1 == 1){
  scanf("%d%d",&x,&y);//Tarros de miel dulce y amarga
  if((x == 0) && (y == 0)){
    break;
  }
  if((x+y) != 13){
  if(x>y){
  printf("\nTo the convention.");  
  }
  if(x<y){
  printf("\nLeft beehind.");  
  }
  if(x==y){
  printf("\nUndecided.");
  }
  }else{
    printf("\nNever speak again.");
  }
  }
  return 0;
}
/*[INPUT]
17 3
13 14
8 5
44 44
0 0*/
/*[OUTPUT]
To the convention.
Left beehind.
Never speak again.
Undecided.*/