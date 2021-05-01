#ifndef CARDRANDOM_H
#define CARDRANDOM_H

class cardRandom{
  private: 
    int x;
  public:
    cardRandom(const int x);
    double rand();
    void print() const;
};
#endif
