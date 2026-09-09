#include <stdio.h>
const int MAX=9;

void printValues(int *arr){
	for(int i = 0; i < MAX; i++){
		printf("%d", arr[i]);
	} //end for
	printf("\n"); 
} //end printValues

void swap(int *val1 , int *val2){
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
} //end swap

void sort(int *arr) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main
