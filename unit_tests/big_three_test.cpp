#include <cassert>
#include <iostream>

#include "../includes/Card.h"

int main(){
   Card c1(TWO, HEARTS);
   Card c2(c1);
   std::cout << "testing copy constructor\n";
   assert(c1.get_rank() == c2.get_rank());
   assert(c1.get_suit() == c2.get_suit());
   std::cout << "copy constructor PASS\n";
   std::cout << "testing copy assignment\n";
   Card c3 = c1;
   assert(c1.get_rank() == c3.get_rank());
   assert(c1.get_suit() == c3.get_suit());
   std::cout << "assignment constructor PASS\n";
   return 0;
}
