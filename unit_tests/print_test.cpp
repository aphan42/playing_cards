#include <cassert>
#include <iostream>
#include <sstream>

#include "../includes/Card.h"

int main(){
  Card default_card;
  Card other_card(TWO, HEARTS);
  std::cout << default_card << '\n';
  std::cout << other_card << '\n';
  return 0;
}
