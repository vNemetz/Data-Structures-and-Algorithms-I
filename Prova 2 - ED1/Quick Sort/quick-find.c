#include "utils.h"

/* */
void quick_find (int *A, int left, int right, int k) {
  //particionando
  int pivo = A[k];
  swap(A, pivo, right);
  int i = left-1, j;
  for(j = left; j < right; j++){
    if(A[j] <= pivo){
      i += 1;
      swap(A, j, i);
    }
  }
  swap(A, i+1, right);
  printf("%d", A[i+1]);
}

/* */
int main () {
  int n = 8;
  int A[] = {7, 1, 3, 10, 17, 2, 21, 9};
  print (A, n, "Input");
  quick_find (A, 0, n-1, 4);
  print (A, n, "Partial sorted");
  return 0;
}
