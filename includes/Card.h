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
   Card(Rank rank = ACE, Suit suit = SPADES, bool is_ace_high = true);
   friend std::ostream& operator<< (std::ostream& os, Card& card);

   int get_rank() const;
   int get_suit() const;
private:
   Rank rank;
   Suit suit;
   std::string obtain_card_name();

   bool ace_high;
};

bool operator< (const Card& c1, const Card& c2);

#endif
