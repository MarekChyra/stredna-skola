#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void dis(float a, float b, float c) {
  float dis = (b * b) - 4 * a * c;

  if (dis < 0) {
    printf("Rovnica nema riesenie");
  } else if (dis == 0) {
    printf("Rovnica ma 1 riesenie.\n");
    printf("x = %.2f", (-b) / (2 * a));
  } else if (dis > 0) {
    printf("Rovnica ma 2 riesenia.\n");
    printf("x1 = %.2f\n", (-b + sqrt(dis)) / (2 * a));
    printf("x2 = %.2f\n", (-b - sqrt(dis)) / (2 * a));
  } else {
    printf("nieco sa pokazilo\nskus znova");
  }
}

int main() {
  float a, b, c;

  printf("zadaj koeficienty kvadratickej rovnice (a, b, c): ");
  scanf("%f %f %f", &a, &b, &c);

  dis(a, b, c);

  return 0;
}
