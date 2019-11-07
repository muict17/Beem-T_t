#include<stdio.h>
int babo(int n,int m,int i,int j,int a[n][m]){
  int x;
  if(i==n&&j==m){
    
    return x + babo;
  }
  if (i==n){
    i=0;
    a[i][j]=babo(n,m,i,j+1,a);

  }
  printf("%d",a[i][j]);
  a[i][j]=babo(n,m,i+1,j,a);

return a[n][m];
}

int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int a[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[n][m]);
    }
  }
   int i=0,j=0;
   babo(n,m,i,j,a);


  return 0;
}
