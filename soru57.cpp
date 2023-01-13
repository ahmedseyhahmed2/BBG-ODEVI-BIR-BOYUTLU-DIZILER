#include <stdio.h>
#include <math.h>

// Renkler arasi dönüsüm islemleri için kullanilacak sabitler
#define MIN(x, y, z) ((x) < (y) ? ((x) < (z) ? (x) : (z)) : ((y) < (z) ? (y) : (z)))
#define MAX(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))

void hslToCmyk(double h, double s, double l, double *c, double *m, double *y, double *k) {
  // HSL'den CMYK'ye dönüsüm islemleri burada yapilir
  double r, g, b;

  // HSL degerlerinden RGB degerlerine dönüstürme
  if (s == 0) {
    r = g = b = l; // Grayscale
  } else {
    double q = (l < 0.5) ? (l * (1 + s)) : (l + s - l * s);
    double p = 2 * l - q;
    r = hueToRgb(p, q, h + 1.0/3.0);
    g = hueToRgb(p, q, h);
    b = hueToRgb(p, q, h - 1.0/3.0);
  }

  // RGB degerlerinden CMYK degerlerine dönüstürme
  *k = 1 - MAX(r, g, b);
  *c = (1 - r - *k) / (1 - *k);
  *m = (1 - g - *k) / (1 - *k);
  *y = (1 - b - *k) / (1 - *k);
}

double hueToRgb(double p, double q, double t) {
  if (t < 0) t += 1;
  if (t > 1) t -= 1;
  if (t < 1.0/6.0) return p + (q - p) * 6 * t;
  if (t < 1.0/2.0) return q;
  if (t < 2.0/3.0) return p + (q - p) * (2.0/3.0 - t) * 6;
  return p;
}

int main() {
  double h, s, l;
  double c

