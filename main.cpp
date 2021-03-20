#include <iostream>

int main() {
  //BMI : 몸부게 / 키(m) * 키(m))
  int weight = 0;
  int height = 0;
  printf("몸무게 입력 : ");
  scanf("%d", &weight);
  printf("키 입력(m) : ");
  scanf("%d", &height);

  int bmi = weight / (height * height);
  printf("BMI 지수는 %d 입니다! 이 돼지놈아", bmi); 
	
}