#include <stdio.h>
#include <math.h>

// Renkler arasi dönüsüm islemleri için kullanilacak sabitler
#define MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MAX(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))

void cmykToHsv(double c, double m, double y, double k, double *h, double *s, double *v) {
  // CMYK'den HSV'ye dönüsüm islemleri burada yapilir
  double r, g, b;

  // CMYK degerlerinden RGB degerlerine dönüstürme
  r = (1 - c) * (1 - k);
  g = (1 - m) * (1 - k);
  b = (1 - y) * (1 - k);

  // RGB degerlerinden HSV degerlerine dönüstürme
  double max = MAX(r, g, b), min = MIN(r, g, b);
  *v = max;
  *s = (max == 0) ? 0 : (max - min) / max;
  if (*s == 0) {
    *h = 0;
  } else {
    if (r == max) {
      *h = (g - b) / (max - min);
    } else if (g == max) {
      *h = 2 + (b - r) / (max - min);
    } else if (b == max) {
      *h = 4 + (r - g) / (max - min);
    }
    *h /= 6;
    if (*h < 0) {
      *h += 1;
    }
  }
}

int main() {
  double c, m, y, k;
  double h, s, v;

  printf("Lutfen renk degerlerini giriniz (CMYK biciminde, virgulle ayrilmis olarak): ");
  scanf("%lf, %lf, %lf, %lf", &c, &m, &y, &k);

  cmykToHsv(c, m, y, k, &h, &s, &v);

  printf("Donusturulmus renk degerleri (HSV biciminde): %lf, %lf, %lf\n", h, s, v);

  return 0;
}

