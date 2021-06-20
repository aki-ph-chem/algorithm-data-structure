#include<stdio.h>
#define nmax 1000 //max data


int data_input(int *x){

    int i,n;
    
    printf("Let enter number of data n \n");
    scanf("%d", &n);

    printf("Let enter data \n");
    for( i = 1; i < n; i++){
     
        scanf("%d", &x[i]);
        
      }
    
     printf("entered data is");
     printf(" \n  ");
     
     for(i = 1; i < n ; i++){

        printf("%5d", i);
     
       }
      
       printf("\n  x"); 

      for(i = 1; i < n ; i++){

         printf("%5d", x[i]);

         }

       printf("\n");


       return n;

}


void sorted_data_output(int n, int *y){

    int i;
    printf("\n sorted data");
    printf("\n ");
    
    for(i = 1; i<=n; i++){

        printf("%5d",i );

      }

    printf("\n y");

    for(i = 1; i<=n; i++){

        printf("%5d", y[i]);

       }

    printf("\n ");

}


int main(){

     int x[nmax + 1], y[nmax + 1];
     int j,k,n;
     n = data_input(x);
     y[1] = x[1];

     for( k = 1;k<= n-1;k++){

        y[0] = x[k+1];
        j = k;

        while(y[j] > x[k+1]){
            
           y[j+1] = y[j]; j--;
         
           }
           y[j+1] = x[k+1];

      }

   sorted_data_output(n,y);

   return 0;
}
   
