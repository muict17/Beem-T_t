#include<stdio.h>
int main()
{
  int n,x;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<=n*n*n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        if(a[j]>a[k]){
          x=a[j];
          a[j]=a[k];
          a[k]=x;
        }
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%d -%d\n",i,a[i]);
  }
   int max[3];
   int countmax[3];
   
   for(int i=0;i<3;i++){
     countmax[i]=0;
     max[0]=a[i];
   }
  max[0]=a[1];
   for(int i=0;i<n;i++){
     if(a[i]>=max[i]){
        max[i]=a[i];
        countmax[0]=countmax[0]+1;
     }
     else if(a[i])

   }
  


  return 0;
}
