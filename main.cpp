#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  /*
  //BMI : 몸부게 / 키(m) * 키(m))
  float weight = 0;
  float height = 0;
  printf("몸무게 입력 : ");
  scanf("%f", &weight);
  printf("키 입력(m) : ");
  scanf("%f", &height);

  int bmi = weight / (height * height);
  printf("BMI 지수는 %d 입니다! 이 돼지놈아", bmi); 

  printf("this is practice");
  
  printf("this is practice on ipad");*/
  
  //복합대입연산자
  /*
  int num = 0;
  num+=1;
  num-=1;
  num*=1;
  num/=1;
  
  int num1=10;
  int num2=20;
  int num3=30;
  int result=0;
  
  result = num1 < num2;
  printf("결과 : %d",result);
  result = num1 > num2;
  printf("결과2 : %d",result);
 
  //논리연산자 and or not && || 파이프라인
  int bmi = 23;
  result = bmi < 20 || bmi > 25;
  printf("result = %d", result);
  */
  
  //if
  //짝 홀수 판별 초기화 분기문
  //판별 후 결과 출력
  /*
  int number = 13;
  if(number %2 == 0){
    printf("%d는 짝수입니다\n",number);
  }else{
    printf("%d는 홀수입니다\n",number);
  }
  
  //다중조건
  int score = 87;
  if (score > 90){
    printf("%d is A\n",score);
  }else if(score > 80){
    printf("%d is B\n",score);
  }else if(score > 70){
    printf("%d is C/n",score);
  }else{
    printf("%d is F\n",score);
  }
  
  float weight = 0;
  float height = 0;
  
  float bmi= 0;
  
  printf("weight : ");
  scanf("%f",weight);
  printf("height : ");
  scanf("%f",height);
  bmi = weight / (height * height); 
  
  int number =0;
  printf("number");
  scanf("%d",&number);
  
  if(number > 10){
    printf("%d is bigger than 10",number);
    if(number % 3 == 0){
      printf("%d can be devided in 3 ",number);
    }else{
      printf("%d can not be devided in 3",number);
    }
  }
  //버퍼 
  
  //switch case
  int number = 2;
  //switch(값) 이 case 에 만족하면 실행
  //값 과 case 값이 같다면 그 case 부터 아래 모든 case 실행
  //break; 로 하나씩 실행 가능
  switch(number) {
    case 0:
      printf("읽기");
      break;
    case 1:
      printf("쓰기");
      break;
    case 2:
      printf("수정");
    case 3:
      printf("삭제");
    
  }
  
  int number = 0;
  printf("number : ");
  scanf("%d",&number);
  
  switch(number/10){
    case 10:
     // printf("A");
     // break;
    case 9:
      printf("A");
      break;
    case 8:
      printf("B");
      break;
    case 7:
      printf("C");
      break;
    default:
      printf("F");
    
    
  }
  
  //loop while
  
  int number = 0;
  //while(조건식)
  while(number < 3){
    printf("count %d\n",number);
    number += 1;
  }
  
  int inputNum = 0;
  int count = 0;
  int sum = 0;
  
  while(true){
    printf("입력:");
    scanf("%d",&inputNum);
    printf("input : %d\n",inputNum);
    // 0입력 : 루프종료
     if(inputNum == 0){
       printf("finished\n");
       printf("count : %d\n",count);
       printf("sum : %d\n", sum);
       break;
     }
     count += 1;
     sum += inputNum;
     
  }
  
  //for 반복
  for(int i = 0; i <5; i++){
    printf("hello world!\n");
  }
  
  int number = 0;
  printf("number : %d\n",number);
  printf("number : %d\n",number++); //number를 출력하고 +1
  printf("number : %d\n",++number); //++number +1을 실행하고 number 출력
  */
  
  //for(;;){} : for 무한반복
  
  
  return 0;
  
}