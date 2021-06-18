
#include<stdio.h>

int euclid_gcd(int i,int j){

if(i==0) return j;
else if(j==0) return i;
  else if (i<j) return euclid_gcd(j,i);
     else{
            return euclid_gcd(j, i % j);
     }

}

int main(){

int a,b; 
int d;

printf("Let enter natural number a,b \n");
printf("The inputeted number is ");

scanf(" %d %d ", &a,&b);

printf("a = %d b = %d \n", a,b);


d = euclid_gcd(a,b);

printf("GCD between %d and %d is GCD(%d,%d) = %d .\n",a,b,a,b,d);


return 0;

}
