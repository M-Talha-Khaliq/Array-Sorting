#include <iostream>
using namespace std;

void SelectionSort(int array[], int n){
  for(int i=0; i<n-1; i++){
    int smallestindex=i;
    for(int j=i+1; j<n; j++){
      if(array[j] < array[smallestindex]){
        smallestindex=j;
      }
    }
    swap(array[i],array[smallestindex]);
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
  
  SelectionSort(array, n);
  PrintArray(array, n);

  return 0;
}