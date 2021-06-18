

#include<stdio.h>
#define ncmax 50  // max of call

int a[ncmax + 1],b[ncmax + 1];
int q[ncmax + 1],r[ncmax + 1],x[ncmax + 1],y[ncmax + 1],d[ncmax + 1];

int nc; //number of call

void ex_euclid_gcd(int k){

    if(b[k] == 0){
       x[k] = 1;y[k] = 0;q[k] = 0;r[k] = 0;d[k] = a[k];
       }
       
       else {

            q[k] = a[k]/b[k]; r[k] =a[k]%b[k];
            k++; nc = k;
            a[k] = b[k-1]; b[k] = r[k-1];
            ex_euclid_gcd(k);
            x[k-1] = y[k]; y[k-1] = x[k] -q[k-1]*y[k];d[k-1] = d[k]; 
            }
}


void interation_output(void){

     int k;
     printf("\n");
     printf("value of k_th call of a[k],b[k],q[k],r[k],x[k],y[k],d[k] \n");
     printf("      a b q = a/b r = a%b x y d = GCD(a,b) = ax + by \n");

     for(k = 1; k <= nc ;k++){
         
         printf("k = %2d ", k); printf("k = %5d ", a[k]); printf("%5d ",b[k]);
         printf("k = %4d ", q[k]); printf("%7d ", r[k]); printf("%4d ",x[k]);
         printf("%4d ",y[k]);
         printf("%5d = %5d*(%3d) + %5d*(%3d)\n",d[k],a[k],x[k],b[k],y[k]);

       }
     }

int main(){

int temp;
    nc = 1;
    
    printf("Let enter natural number a,b \n");
    scanf("%4d  %4d", &a[nc],&b[nc]);
    printf("Inputted number is ");

    printf("a = %4d b = %4d \n", a[nc],b[nc]);

    if(a[nc] < b[nc]){

       temp = a[nc]; a[nc] = b[nc]; b[nc] = temp;
}

ex_euclid_gcd(nc);
interation_output();

return 0;

}
         
