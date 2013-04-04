#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(string type,char symbol){
  this->symbol=symbol; //the variable symbol that belongs to the class is now set to the value of the argument symbol in the parantheses up ab ove
  if(type=="human"){
    this->type="human";//same idea as for symbol
  }
  else{
    if(type=="ai"){
      this->type="ai";
    }
    else{
      cout<<"Invalid player type, choose ai or human"<<endl;
    }
    
}
}
  string Player::getType(){
    return type;
  }
  char Player::getSymbol(){
    return symbol;
  }
void Player::setTurn(){
  myTurn=true; 
}
bool Player::getTurn(){
  return myTurn;
}
