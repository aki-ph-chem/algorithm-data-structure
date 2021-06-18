#include<stdio.h>



#define nmax 1000

int x[nmax+i],y[nmax+1];
int z[nmax+1];

int data_input(void){// function for input ddata

int i,n;

printf("Let enter number of data\n");
scanf("%d",&n);

printf("Let enter data (number of data n = %d) \n",n);
for(i = 1; i <= n ;i++){

   scanf("%5d",&x[i]);

   };

printf("Entered data is here");
printf("\n  ");
for( i = 1; i<=n ;i++){

   printf("%5d",i);

};

printf("\n x");

for( i = 1; i <= n;i++){

   printf("%5d",x[i]);

   };

printf("\n");

return n;

}

void merge(int left,int right,int middle){ // for merge function

     int k1,k2,k3;
     k1 = left;k2 = middle + 1;k3 = left;
     
     while((k1 <= middle)&&(k2 <= right)){
     
        if(z[k1] <= z[k2]){ y[k3] = z[k1]; k3 = k3 + 1; k1 = k1 + 1;}
        else{y[k3] = z[k2]; k3 = k3 + 1; k2 = k2 + 1 }

     }


