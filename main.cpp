#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//2차원 5*5 배열 선언
//랜덤으로 알파벳 대문자 입력
//문자를 입력받아 일치하는 문자가 배열에 있을 경우 '0'으로 변환
//가로, 세로, 대각선 빙고 => 게임 종료

int main(){
  //5*5 배열
  int table[5][5] = {0,};
  srand(time(NULL));
  int randomNumber = 0;
  //randomNumber = rand()%50 + 1;
  //printf("%d", randomNumber);
  //알파벳 대문자 배열에 입력
  int maxnumber = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      table[i][j] = rand() % 26 + 65; //아스키코드 65부터 25번째 까지(A ~ Z))
      printf("%5c(%d)", table[i][j], table[i][j]);    
      }
    printf("\n");
  }
  printf("%d\n", table[0][0]);
  //scanf, input 으로 값 받기
  //while로 무한루프
  int parameter = 1;
  while(parameter){
  char inputChar = 0;
  printf("input : ");
  scanf("%s\n", &inputChar);
  // for, if로 일치 문자열 0으로 만들기
  for(int i = 0; i < 5; i++){
    for(int j = 0; j <5; j++){
  if(inputChar == table[i][j]){
      table[i][j] = 0;
      }
     }
    }
  if(table[0][0] == 0){
    printf("game over!\n");
    parameter = 0;
  }
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("%5c(%d)", table[i][j], table[i][j]);    
      }
    printf("\n");
  }
  return 0;
}
