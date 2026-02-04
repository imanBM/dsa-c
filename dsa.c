#include <stdio.h>

typedef struct
{
   char model[25];
   int year;
   int price;
} Car;


int main(){

Car cars[] = { {"Porsche", 2025, 35000}, 
{"Royce", 2022, 1000000}, 
{"BMW", 2024, 250000}};
     
int num = sizeof(cars)/ sizeof(cars[0]);

for(int i = 0; i < num; i ++){
    printf("%s %d $%d\n",cars[1].model, cars[i].year, cars[i].price);
    
}


    return 0;
}