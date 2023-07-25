#include <stdio.h>
#include <stdbool.h>
bool is_integer(double num) {
    return (num == (int)num);
}

int main(void)
{
  double input;
  int n;

  printf("n = ");
  if (scanf("%lf", &input) != 1 || !is_integer(input)) { //整数以外が入力された際にエラーメッセージを表示する
        printf("エラー：整数を入力してください。\n");
        return 1;
    }

    n = (int)input;

  if( (n & 1) == 0 ){ //(n & 1)の括弧を追加した。ifの条件判定と、ビット演算を正しい順番に実行するためである
    printf("%d は偶数です\n", n);
  }
  return 0;
}
