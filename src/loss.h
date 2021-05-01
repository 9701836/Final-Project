#ifndef LOSS_H
#define LOSS_H
#include <string>
using namespace std;

class Loss {
  private:
    bool loss;
  public:
    Loss(const bool loss);
    string lossScreen();
    void print() const;
};
#endif
