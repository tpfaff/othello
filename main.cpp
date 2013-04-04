#include "GameBoard.h"
#include <iostream>
using namespace std;
bool getMove(int&,int&);
bool done=false;
int main(){

  GameBoard gb;
  Player p1("human",'X');
  Player p2("ai",'O');
  int row,column;
  p1.setTurn(); //its player 1s turn

  while(!done){ //game loop
    gb.Update();
    if(p1.getTurn()){
      cout<<"Player 1"<<endl;
      getMove(row,column);
      cout<< gb.Move(row,column,p1);
    }
    gb.Update();
  }
}

bool getMove(int& row,int& column){
  cout<<"Move to what space? row,column"<<endl;
  cin>>row;
  cin>>column;
  
}
