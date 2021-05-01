#ifndef VICTORY_H
#define VICTORY_H
#include <string>
using namespace std;

class victory {
  private:
    bool win;
  public:
    victory(const bool win);
    string winScreen();
    void print() const;
};
#endif
