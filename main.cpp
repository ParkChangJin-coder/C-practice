#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 9

int isFinish(int choice){
  if (choice == -1){
    return 1;
  }else{
    return 0;
  }
}

//Menu 목록

typedef struct Menu{
  int idx;
  char name[50];
  unsigned int price;
} Menu;

typedef struct Bill{
  char name[50]; //주문한 메뉴 이름
  unsigned int count;
  unsigned int price; //주문한 메뉴의 가격
} Bill;

void welcomeMessage(){
  printf("Welcome to Pasccuci!\n");
}

//Menu menu[] ??
void printMenu(Menu menu[], int size){
       for (int i = 0; i < size; i++){
     printf("%d - %s - %d\n", menu[i].idx, menu[i].name, menu[i].price);
   }
}
//같은 메뉴가 있으면 동일한 메뉴가 위차한 인덱스 번호를 반환
//같은 메뉴가 없으면 -1을 반환하여 없다는 것을 표현
int checkMenu(Menu select, Bill*order, int orderCnt){
  for(int i = 0; i < orderCnt; i++){
    if(strcmp(order[i].name, select.name) == 0){
      return i;
      //return 활용법
    }
  }
  return -1;
}

void addNewMenuOrder(Menu menu, Bill*order, int orderCnt){
  strcpy(order[orderCnt].name, menu.name);
  order[orderCnt].price = menu.price;
  order[orderCnt].count = 1;

}

void addMenuOrder(Bill*order, int orderidx){
  //Bill*order의 정체
  order[orderidx].price += (order[orderidx].price / order[orderidx].count);
  order[orderidx].count += 1;
}

void printOrder(Bill* order, int orderCount){
  for(int i = 0; i< orderCount; i++){
    printf("메뉴 : %s 수량 : %d 가격 :  %d 원\n", order[i].name, order[i].count, order[i].price);
  }
}

void getTotal(Bill* order, int orderCount){
  int sum = 0;
  for(int i = 0; i< orderCount; i++){
    sum += order[i].price;
  }
  printf("총 가격 : %d 원\n", sum);
}


int main(){
   Menu menu[MAX_SIZE] = {
                  {1, "ChocoIcecream,", 3000},
                  {2, "BananaIcecream,", 4000},
                  {3, "StrawberryIcream,", 5000},
                  {4, "MintIcream,", 1000},
                  {5, "SoftIcream,", 2000},
                  {6, "ShootingIcecream,", 5600},
                  {7, "NormalIcecream,", 8900},
                  {8, "LemonIcecream,", 1000},
                  {9, "CoolWater,", 500}
   };
  welcomeMessage();
  printMenu(menu, MAX_SIZE);

  int size = 3;
  int cnt = 0;
  Bill* order = (Bill*)calloc(size,sizeof(Bill));

  while(1){
    //메뉴입력
    int choice = 0;
    printf("메뉴를 선택해 주세요\n");
    scanf("%d", &choice);
    //-1 판단
    if(isFinish(choice)){
      printf("주문이 종료 되었습니다!\n");
      break;
    }
    //공간 남는지 확인
    if(size == cnt){
      size += 3;
      order = (Bill*)realloc(order, size*sizeof(Bill));
      if(order == NULL){
        printf("동적 할당 실패 ...");
        return 0;
      }
    }

    //메뉴저장
    choice -= 1;
    int status = checkMenu(menu[choice], order, cnt);
    if (status >= 0){
      //존재
      addMenuOrder(order, status);
    }else{
      addNewMenuOrder(menu[choice], order, cnt);
      cnt++;
    }
  }
  //주문서 출력하기
  printOrder(order, cnt);
  getTotal(order, cnt);

  return 0;
}