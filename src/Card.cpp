#include "../includes/Card.h"


Card::Card(Rank rank, Suit suit, bool is_ace_high):
   rank(rank), suit(suit), ace_high(is_ace_high) {}

std::string Card::obtain_card_name(){
   std::string card_name;
   switch(rank){
   case ACE:
      card_name += "Ace";
      break;
   case TWO:
      card_name += "Two";
      break;
   case THREE:
      card_name += "Three";
      break;
   case FOUR:
      card_name += "Four";
      break;
   case FIVE:
      card_name += "Five";
      break;
   case SIX:
      card_name += "Six";
      break;
   case SEVEN:
      card_name += "Seven";
      break;
   case EIGHT:
      card_name += "Eight";
      break;
   case NINE:
      card_name += "Nine";
      break;
   case TEN:
      card_name += "Ten";
      break;
   case JACK:
      card_name += "Jack";
      break;
   case QUEEN:
      card_name += "Queen";
      break;
   case KING:
      card_name += "King";
      break;
   default:
      break;
   };
   card_name += " of ";
   switch(suit){
   case SPADES:
      card_name += "Spades";
      break;
   case HEARTS:
      card_name += "Hearts";
      break;
   case DIAMONDS:
      card_name += "Diamonds";
      break;
   case CLUBS:
      card_name += "Clubs";
      break;
   default:
      break;
   };
   return card_name;
}

int Card::get_rank() const{
   return rank;
}

int Card::get_suit() const{
   return suit;
}

std::ostream& operator<< (std::ostream& os, Card& card){
   os << card.obtain_card_name();
   return os;
}

bool operator< (const Card& c1, const Card& c2){
   if (c1.get_rank() < c2.get_rank()) return true;
   return false;
}


