#include <stdio.h>
#include <math.h>

// Renkler arasi dönüsüm islemleri için kullanilacak sabitler
#define MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MAX(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))

void cmykToHsl(double c, double m, double y, double k, double *h, double *s, double *l) {
  // CMYK'den HSL'ye dönüsüm islemleri burada yapilir
  double r, g, b;

  // CMYK degerlerinden RGB degerlerine dönüstürme
  r = (1 - c) * (1 - k);
  g = (1 - m) * (1 - k);
  b = (1 - y) * (1 - k);

  // RGB degerlerinden HSL degerlerine dönüstürme
  double max = MAX(r, g, b), min = MIN(r, g, b);
  *l = (max + min) / 2;
  if (max == min) {
    *h = 0;
    *s = 0;
  } else {
    double d = max - min;
    *s = (*l > 0.5) ? (d / (2 - max - min)) : (d / (max + min));
    if (max == r) {
      *h = (g - b) / d + (g < b ? 6 : 0);
    } else if (max == g) {
      *h = (b - r) / d + 2;
    } else if (max == b) {
      *h = (r - g) / d + 4;
    }
    *h /= 6;
  }
}

int main() {
  double c, m, y, k;
  double h, s, l;

  printf("Lütfen renk degerlerini giriniz (CMYK biçiminde, virgülle ayrilmis): ");
  scanf("%lf,%lf,%lf,%lf", &c, &m, &y, &k);

  cmykToHsl(c, m, y, k

