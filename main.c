#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int myRoot(double x) // x の平方根を返す関数。x >= 0 ではないとき exit(1) とする。
{
  if( !(x >= 0) ){ //xを０より大きいとする
    exit(1);
  }
  return sqrt(x);//小数点以下を表示できるようそのまま引数にいれる
}

void foo(double x){
  if (x > 0){
    printf("正の値です。\n");
  }
  else if (x == 0){
    printf("0です。\n");
  }
  else if(x < 0){
    printf("負の値です。\n");
  }else{
    printf("数ではないです。\n");
  }
}

int main(void)
{
  int i = 0; //iの値を初期化
  double *x = (double *)malloc(sizeof(double) * 100);

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
