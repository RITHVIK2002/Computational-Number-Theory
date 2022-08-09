#include<iostream>
#include <gmp.h>
 
int main(void) {
   mpz_t x, y, result,q;
 
   mpz_init_set_str(x, "76120582547389450000000000000000000000000000000000000000000000000000000000000000000000000000", 10);
   mpz_init_set_str(y, "926359112843908100000000000000000000000000000000000000000000000000000000000000000000000000", 10);
   mpz_init(result);
        gmp_randclass  r;
          mpf_class  f (0, 512);   // 512 bits precision
          f = r.get_f();
   mpz_mul(result, x, y);
   gmp_printf("    %Zd\n"
              "*\n"
              "    %Zd\n"
              "--------------------\n"
              "%Zd\n", x, y, result);
    gmp_printf("%Zd ",f);
   /* free used memory */
   mpz_clear(x);
   mpz_clear(y);
   mpz_clear(result);
   
   return 0;
}