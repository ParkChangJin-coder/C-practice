#include <iostream>

int main() {
  //BMI : 몸부게 / 키(m) * 키(m))
  float weight = 0;
  float height = 0;
  printf("몸무게 입력 : ");
  scanf("%f", &weight);
  printf("키 입력(m) : ");
  scanf("%f", &height);

  int bmi = weight / (height * height);
  printf("BMI 지수는 %d 입니다!", bmi); 
	
}