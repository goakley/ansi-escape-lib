#include "escape.h"

void ansi_cuu(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uA", n);
}

void ansi_cud(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uB", n);
}

void ansi_cuf(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uC", n);
}

void ansi_cub(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uD", n);
}

void ansi_cnl(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uE", n);
}

void ansi_cpl(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uF", n);
}

void ansi_cha(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uG", n);
}

void ansi_cup(FILE *f, unsigned int n, unsigned int m) {
  fprintf(f, "\033[%u;%uH", n, m);
}

void ansi_ed(FILE *f, unsigned int n) {
  if (n >= 0 && n <= 2)
    fprintf(f, "\033[%uJ", n);
}

void ansi_el(FILE *f, unsigned int n) {
  if (n >= 0 && n <= 2)
    fprintf(f, "\033[%uK", n);
}

void ansi_su(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uS", n);
}

void ansi_sd(FILE *f, unsigned int n) {
  fprintf(f, "\033[%uT", n);
}

void ansi_hvp(FILE *f, unsigned int n, unsigned int m) {
  fprintf(f, "\033[%u;%uf", n, m);
}

void ansi_sgr(FILE *f, unsigned int n, ...) {
  va_list ap;
  int i;
  va_start(ap, n);
  for (i = n; i >= 0; i = va_arg(ap, unsigned int)) {
    printf("\033[%um", i);
  }
  va_end(ap);
}

//void ansi_dsr(FILE *f) ???

void ansi_scp(FILE *f) {
  fprintf(f, "\033[s");
}

void ansi_rcp(FILE *f) {
  fprintf(f, "\033[u");
}

int ansi_dectcem_show(FILE *f) {
  fprintf(f, "\033[?25h");
}

int ansi_dectcem_hide(FILE *f) {
  fprintf(f, "\033[?25l");
}
