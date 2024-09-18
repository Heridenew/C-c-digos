#include<stdio.h>

int main() {
   int ai = 0, af = 0, qd = 0, di = 0, df = 0, mi = 0, mf = 0, anp = 0, mp = 0;

   scanf("%d/%d/%d", & di, & mi, & ai);
   scanf("%d/%d/%d", & df, & mf, & af);
   anp = ai + 1;

   if (ai != af) {
      while (anp < af) {
         if (anp % 400 == 0) qd = qd + 366;
         else if (anp % 100 != 0 && anp % 4 == 0) qd = qd + 366;
         else qd = qd + 365;
         anp++;
      }
      mp = mi;
      while (mp <= 12) {
         if (mp == mi) {
            if (mi <= 7 && mi % 2 == 1) qd += 31 - (di - 1);
            else if (mi <= 7 && mi % 2 == 0 && mi != 2) qd += 30 - (di - 1);

            else if (mi == 2) {
               if (ai % 400 == 0) qd = qd + 29 - (di - 1);
               else if (ai % 100 != 0 && ai % 4 == 0) qd += 29 - (di - 1);
               else qd += 28 - (di - 1);
            } else if (mi > 7 && mi % 2 == 0) qd += 31 - (di - 1);
            else if (mi > 7 && mi % 2 == 1) qd += 30 - (di - 1);
         } else {
            if (mp <= 7 && mp % 2 == 1) qd += 31;
            else if (mp <= 7 && mp % 2 == 0 && mp != 2) qd += 30;

            else if (mp == 2) {
               if (ai % 400 == 0) qd = qd + 29;
               else if (ai % 100 != 0 && ai % 4 == 0) qd += 29;
               else qd += 28;
            } else if (mp > 7 && mp % 2 == 0) qd += 31;
            else if (mp > 7 && mp % 2 == 1) qd += 30;
         }
         mp++;
      }
      mp = mf;
      while (mp >= 1) {
         if (mp == mf) {
            qd + df;
         } else {
            if (mp <= 7 && mp % 2 == 1) qd += 31;
            else if (mp <= 7 && mp % 2 == 0 && mp != 2) qd += 30;

            else if (mp == 2) {
               if (af % 400 == 0) qd += 29;
               else if (af % 100 != 0 && af % 4 == 0) qd += 29;
               else qd += 28;
            } else if (mp > 7 && mp % 2 == 0) qd += 31;
            else if (mp > 7 && mp % 2 == 1) qd += 30;
         }
         mp--;
      }
   } else {
      mp = mi;
      while (mp < mf) {
         if (mp == mi) {
            if (mi <= 7 && mi % 2 == 1) qd += 31 - (di - 1);
            else if (mi <= 7 && mi % 2 == 0 && mi != 2) qd += 30 - (di - 1);

            else if (mi == 2) {
               if (ai % 400 == 0) qd = qd + 29 - (di - 1);
               else if (ai % 100 != 0 && ai % 4 == 0) qd += 29 - (di - 1);
               else qd += 28 - (di - 1);
            } else if (mi > 7 && mi % 2 == 0) qd += 31 - (di - 1);
            else if (mi > 7 && mi % 2 == 1) qd += 30 - (di - 1);
         } else {
            if (mp <= 7 && mp % 2 == 1) qd += 31;
            else if (mp <= 7 && mp % 2 == 0 && mp != 2) qd += 30;

            else if (mp == 2) {
               if (ai % 400 == 0) qd = qd + 29;
               else if (ai % 100 != 0 && ai % 4 == 0) qd += 29;
               else qd += 28;
            } else if (mp > 7 && mp % 2 == 0) qd += 31;
            else if (mp > 7 && mp % 2 == 1) qd += 30;
         }
         mp++;
      }
      qd += df;
   }

   printf("%d", qd);
}