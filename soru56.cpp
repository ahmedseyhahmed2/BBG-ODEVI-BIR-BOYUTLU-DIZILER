#include <stdio.h>
#include <math.h>

// Renkler arasi dönüsüm islemleri için kullanilacak sabitler
#define MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MAX(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))

void hsvToHsl(double h, double s, double v, double *h2, double *s2, double *l) {
  // HSV'den HSL'ye dönüsüm islemleri burada yapilir
  double r, g, b;

  // HSV degerlerinden RGB degerlerine dönüstürme
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

  // RGB degerlerinden HSL degerlerine dönüstürme
  *h2 = h;
  *l = (MAX(r, g, b) + MIN(r, g, b)) / 2;
  *s2 = (MAX(r, g, b) == MIN(r, g, b)) ? 0 : ((*l < 0.5) ? ((MAX(r, g, b) - MIN(r, g, b)) / (MAX(r, g, b) + MIN(r, g, b))) : ((MAX(r, g, b) - MIN(r, g, b)) / (2 - MAX(r, g, b) - MIN(r, g, b))));
}

int main() {
  double h, s, v;
  double h2, s2, l;

  printf("Lütfen renk degerlerini giriniz (HSV biçiminde, virgülle

