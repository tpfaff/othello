#ifndef PLAYER_H
#define PLAYER_H
class Player{
 private:
  std::string type;
  char symbol;
  bool myTurn;
 public:
  Player(std::string type,char symbol);
  std::string getType();
  char getSymbol();
  void setTurn();
  bool getTurn();
};
#endif
