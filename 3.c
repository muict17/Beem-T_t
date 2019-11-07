#include <stdio.h>

int main(void) {
  int n,x,y=1,z,a=1;

  scanf("%d",&n);
  
  do{

  y=n/a;
  
  if(y ==a*a){
    x=a;
    z=0;
    printf("true\n");
  }
  a++;
  }
  while(a<n);

if(z!=0)printf("false\n");
  return 0;
}
