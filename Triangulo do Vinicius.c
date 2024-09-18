#include <stdio.h>

int main()
{
    int n, ce=0;
    
    scanf("%d", &n);
    
    for (int i=0;i<=n;i++){
        
      for (int j=0;j<=i;j++){
             if (i==0 || j==0)
                ce = 1;
           else
              ce = ce+1 ;


            
           printf("%d ", ce-1); printf("%d ", ce );
  }
  
  printf("\n");
}
    return 0;
}