#include <iostream>
using namespace std;

void BubbleSort(int array[], int n){
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(array[j] > array[j+1]){
        swap(array [j], array [j+1]);
      }
    }
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
  
  BubbleSort(array, n);
  PrintArray(array, n);

  return 0;
}