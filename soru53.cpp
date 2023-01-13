#include <stdio.h>
#include <math.h>

// Renkler arasi d�n�s�m islemleri i�in kullanilacak sabitler
#define MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MAX(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))

void hsvToCmyk(double h, double s, double v, double *c, double *m, double *y, double *k) {
  // HSV'den CMYK'ya d�n�s�m islemleri burada yapilir
  double r, g, b;

  // HSV degerlerinden RGB degerlerine d�n�st�rme
  int i = floor(h * 6);
  double f = h * 6 - i;
  double p = v * (1 - s);
  double q = v * (1 - f * s);
  double t = v * (1 - (1 - f) * s);
  switch (i % 6) {
    case 0:
      r = v, g = t, b = p;
      break;
    case 1:
      r = q, g = v, b = p;
      break;
    case 2:
      r = p, g = v, b = t;
      break;
    case 3:
      r = p, g = q, b = v;
      break;
    case 4:
      r = t, g = p, b = v;
      break;
    case 5:
      r = v, g = p, b = q;
      break;
  }

  // RGB degerlerinden CMYK degerlerine d�n�st�rme
  *k = 1 - MAX(r, g, b);
  if (*k == 1) {
    *c = 0;
    *m = 0;
    *y = 0;
  } else {
    *c = (1 - r - *k) / (1 - *k);
    *m = (1 - g - *k) / (1 - *k);
    *y = (1 - b - *k) / (1 - *k);
  }
}

int main() {
  double h, s, v;
  double c, m, y, k;

  printf("L�tfen renk degerlerini giriniz (HSV bi�iminde, virg�lle ayrilmis olarak): ");
  scanf("%lf, %lf, %lf", &

