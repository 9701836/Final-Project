#ifndef CARDINTERACT_H
#define CARDINTERACT_H

class cardInteract{
  private:
    bool cardPresent, noFace;
  public:
    cardInteract();
    bool moveCard(const bool cardPresent);
    bool noCard(const bool cardPresent);
    bool cardFlip(const bool noFace);
    void print() const;
};
#endif
