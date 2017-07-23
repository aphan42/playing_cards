#include <cassert>
#include <iostream>

#include "../includes/Card.h"

int main(){
   Card c1(SIX, SPADES);
   Card c2(EIGHT, DIAMONDS);
   assert(c1 < c2);
   std::cout << c1 << " is less than " << c2 << '\n';

   return 0;
}
