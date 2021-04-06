#include <stdio.h>
#include <stdlib.h>
//Menu 목록

typedef struct Menu{
  int idx;
  char name[50];
  int price;
}Menu;

int main(){
   Menu menu[] = {
  {1, "ChocoIcecream,", 3000},
  {2, "BananaIcecream,", 4000},
  {3, "StrawberryIcream,", 5000},
  {4, "MintIcream,", 1000},
  {5, "SoftIcream,", 2000},
  {6, "ShootingIcream,", 5600},
  {7, "NormalIcream,", 8900},
  {8, "LemonICream,", 1000},
  {9, "CoolWater,", 500}
   };

   int size = 3;
   int cnt = 0;

   int* order = (int*)calloc(size,sizeof(int));
    //메뉴 출력
    printf("메뉴판 출력\n");
   for (int i = 0; i < 9; i++){
     printf("%d - %s - %d\n", menu[i].idx, menu[i].name, menu[i].price);
   }

   while(1){
     int choice = 0;
     printf("select what you want! : ");
     scanf("%d", &choice);
     if(choice == -1){
       printf("You're choice is Done!!\n");
       break;
     }

     if(size == cnt){
       size += 3;
       order = (int*)realloc(order,size*sizeof(int));
       if(order == NULL){
         printf("failed......");
       }
     }
     //저장
     order[cnt] = choice;
     cnt++;

   }
   int sum = 0;
    printf("You choosed....");
    for(int i = 0; i < cnt; i++){
      int pick = order[i] -1;
      sum += menu[pick].price;
      printf("%s", menu[pick].name);
    }
    printf("and Amount is %d Won !", sum);
    free(order);
  
  
  return 0;
}