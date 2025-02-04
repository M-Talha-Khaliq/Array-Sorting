#include <iostream>
using namespace std;

void InsertionSort(int array[], int n){
  for(int i=1; i<n; i++){
    int current = array[i];
    int previous = i-1;
    while(previous>=0 && array[previous] > current){
      array[previous+1] = array[previous];
      previous--;
    }
    array[previous+1] = current;
  }
}

void PrintArray(int array[], int n){
  for(int i=0; i<n; i++) {
     cout<<array[i]<<" ";
  }
  cout<<endl;
}

int main () {
  int n=5;
  int array[]={5, 7, 11, 2, 6};
  
  InsertionSort(array, n);
  PrintArray(array, n);

  return 0;
}