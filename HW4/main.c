#include<iostream>
using namespace std;

class Game {
public:
    int currentplayer;
};

class Player {
public:
    bool personalgameboard[9]={false};
};

class Board {
private:
    char gameboard[9]= {'1','2','3','4','5','6','7','8','9'};

public:
    void updategameboard (int position){
        if(gameboard[position-1]=='X'||gameboard[position-1]=='O') {
            cout<<"請重新輸入下一步"<<endl;
            int newposition;
		     cin>>newposition;
		     updategameboard(newposition);
		}
        else {
            if(newgame.currentplayer==1) {
               gameboard[position-1] = 'X';
               player1.personalgameboard[position-1] = 1;
                
            }
            else{
				 gameboard[position-1] = 'O';
               player2.personalgameboard[position-1] = 1;
			 }
		}
	}

	void displaygameboard (){
	    cout<<endl;
        for(int i = 0; i < 9; i+=3) {
			cout<<" "<<gameboard[i]<<" | "<<gameboard[i+1]<<" | "<<gameboard[i+2]<<endl;
			cout<<"---+---+---"<<endl;
		}
		cout<<endl;
	}

};

int main() {
	Game newgame;
	newgame.currentplayer = 1;
	Player player1,player2;
	Board newboard;
	newboard.displaygameboard();
	cout<<"-- Tic Tac Toe -- CSIE@CGU"<<endl;
	cout<<"Player 1 (X) - Player 2 (O)"<<endl;
	
}
