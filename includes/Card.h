#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

// an abstract representation of a standard card in a
// 52 card deck

enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN,
              EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Suit {SPADES=1, HEARTS, DIAMONDS, CLUBS};

class Card{
public:
  Card();
  Card(Rank rank, Suit suit);
  friend std::ostream& operator<< (std::ostream& os, Card& card);
private:
  Rank rank;
  Suit suit;
  std::string obtain_card_name();

  bool ace_high;
};


#endif
