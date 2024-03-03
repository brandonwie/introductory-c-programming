#include <stdlib.h>
#include <stdio.h>

struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;

void compute_balance(int startAge, double initial, retire_info info) {
  for (int i = 0; i < info.months; i++) {
    printf("Age %3d month %2d you have $%.2lf\n", (startAge + i) / 12, (startAge + i) % 12, initial);
    initial += initial * info.rate_of_return + info.contribution;
  }
}

void retirement(int startAge, double initial, retire_info working, retire_info retired) {
  compute_balance(startAge, initial, working);
  startAge += working.months;
  initial += working.months * working.contribution; // Adjust initial for retirement phase
  compute_balance(startAge, initial, retired);
}

int main(void) {
  retire_info working = {489, 1000, 0.045/12};
  retire_info retired = {384, -4000, 0.01/12};
  int startAge = 327; // 27 years and 3 months
  double initialSavings = 21345;

  retirement(startAge, initialSavings, working, retired);

  return 0;
}

