#include<stdio.h>

// swap function

void swap(int *x, int *y){

     int buff;

     buff = *x;
     *x = *y;
     *y = buff;
}
   
// insert sort function

int num_of_loop = 0;

void insert_sort(int array[], int array_size){

int i,j;

for(i = 1;i < array_size; i++){ //sort from head

  j = i;
  while((j > 0)&&(array[j - 1] > array[j])){ // if array is sorted, donnot sort
  
     swap(&array[j -1],&array[j]);          //  swap unsorted array
     j--;
    
     num_of_loop++;
   }
}

}


int main(){


//int array[10] = {2,1,8,5,4,7,9,0,6,3};
int array[4] = {4,2,3,1};
int i;
int array_size = sizeof(array)/sizeof(int);

printf("Bfore sort: ");
for(i = 0; i < array_size ; i++){ printf("%d ",array[i]); }
printf("\n");

insert_sort(array,array_size);

printf("After sort: ");
for(i = 0; i < array_size ; i++){ printf("%d ", array[i]);}
printf("\n");

printf("num_of_loop %d \n",num_of_loop);

return 0;

}

