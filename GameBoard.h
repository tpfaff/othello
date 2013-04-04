#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <iostream>
#include "Player.h"

class GameBoard{

 private:
  bool firstMove;
  char board[8][8];
 public:
  GameBoard();
  void Update();
  bool Move(int,int,Player);
  bool IsValidMoveUp(int x, int y,Player p);
  bool IsValidMoveDown(int x, int y, Player p);
  bool IsValidMoveLeft(int x, int y, Player p);
  bool IsValidMoveRight(int x, int y, Player p);
  bool IsValidMoveUpLeft(int x, int y, Player p);
  bool IsValidMoveUpRight(int x, int y, Player p);
  //bool IsValidMoveDownLeft(int x, int y, Player p);
  //bool IsValidMoveDownRight(int x, int y, Player p);
  char OppositePlayer(Player p);
};
#endif
