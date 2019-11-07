#include<stdio.h>
int main()
{
  int b=1,n,x,z,count=0;
  int a[4];

  scanf("%d",&n);

  for(int i=0;i<4;i++){
    a[i]=0;
  }

  x=n;
for(int i=0;i<4;i++){
  b=b*10; //printf("b= %d\n",b);
  z=x%b; //printf("z=%d\n",z);
  if(z!=0){
    a[i]=1;
    //printf("%d\n",a[i]);
  }
  else {
    a[i]=0;
  }
  x=x-z;
}
b=1;
int sum=0;
for(int i=0;i<4;i++){
  
  if(a[i]==1){
    sum=sum+(a[i]*b);
  }
  b=b*2;
}
printf("%d\n",sum);
int d,e,f;
int count1=0;
f=sum;

do{
  d=f%8;
  f=f-d;
  f=f/8;
  count1++;
  
}
while(f>=1);
int base[count1];


  return 0;
}
