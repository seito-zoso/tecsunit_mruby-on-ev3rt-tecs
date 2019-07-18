#include<stdio.h>

struct obj{
  int common; /* TECSInfoにより型名を格納します */
  union{
    int  num1;
    double  num2;
  } data;
};

int main(void){
    struct obj inst1;
    struct obj inst2;

    inst1.common = 1;
    inst1.data.num1 = 3;

    inst2.common = 2;
    inst2.data.num2 = 2.5;

    printf("%d\n", inst1.data );
    printf("%f\n", inst2.data );

}