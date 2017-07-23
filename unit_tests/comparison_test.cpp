#include <iostream>

#include "../includes/Card.h"

int main(){
   Card c1(SIX, SPADES);
   Card c2(EIGHT, DIAMONDS);

   if (c1 < c2) {
      std::cout << c1 << '\n';
   } else {
      std::cout << c2 << '\n';
   }

   return 0;
}
