#include <stdio.h>
#include <stdlib.h>

void swap(int* cosas, int i, int j){
  int aux = cosas[i];
  cosas[i] = cosas[j];
  cosas[j] = aux;
}

int pivotear(int* cosas, int cantidad){
  int pos_pivote = cantidad-1;
  int pos_final = 0;
  for(int i = 0; i < cantidad; i++){
    if(cosas[i] < cosas[pos_pivote]){
      swap(cosas,i,pos_final);
      pos_final++;
    }
  }
  swap(cosas,pos_final,pos_pivote);
  return pos_final;
}

void quick_sort(int* cosas, int cantidad){
  if(!cosas || cantidad <= 1){
    return;
  }
  int pos_pivote = pivotear(cosas,cantidad);
  quick_sort(cosas, pos_pivote);
  quick_sort(cosas+pos_pivote+1, cantidad-(pos_pivote+1));
}

int main(){
  int cosas[] = {9,4,14,56,71,1,2,52,89,999};
  quick_sort(cosas,sizeof(cosas)/sizeof(int));
  for(int i = 0; i < (sizeof(cosas)/sizeof(int)); i++){
    printf("%i ",cosas[i]);
  }
  printf("\n");
  return 0;
}
