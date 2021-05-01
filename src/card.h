#ifndef CARD_H
#define CARD_H
using namespace std;
#include <string>

class Card{
  private:
    string cards;
  public:
    Card(const string c = "");
    float display();
    void print() const;
};
#endif
