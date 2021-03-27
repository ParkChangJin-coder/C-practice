#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//array

int main(){
  /*
  int numbers[5];
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;
  
  for(int i=0; i<5; i++){
  printf("numbers[%d] = %d\n", i, numbers[i]);
  printf("numbers = %d\n", numbers[1]);
  printf("numbers = %d\n", numbers[2]);
  printf("numbers = %d\n", numbers[3]);
  printf("numbers = %d\n", numbers[4]);
   }  
  
  
  int array[10];
  for(int i = 0; i <= 10; i++){
    array[i] = i*2;
    printf("array[%d] = %d\n",i,array[i]);
  }
  
  int array2[4] = {0, 1, 2, 3};//{}로 초기화
  int array4[4] = {0,}; //모든 공간을 0으로 초기화
  printf("%d", array4[2]);
  */
  
  //길이가 10인 array 생성
  //랜덤으로 숫자 입력
  //오름차순으로 sorting
  
  int array[10] = {0,};
  srand(time(NULL));//랜덤함수의 seed값 초기화
  
  for(int i = 0; i < 10; i++){
    int randomNumber =  0;
    randomNumber = rand()%10+1;
    
    array[i] = randomNumber;
    printf("array[%d] = %d\n", i, randomNumber);
  }
  
  
  
  return 0;
}