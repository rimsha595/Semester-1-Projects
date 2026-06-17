//Rimsha hassan
//SU91-BIETM-F23-037
#include<iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
char sq[10] = {'0','1','2','3','4','5','6','7','8','9'};
    char a,b;
	int player = 1;
	int choice;
	int win = -1;
	
	char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int gamer = 1,i,option;
    char e,d;
    char mark;
    char mar;
    
void X_O()
{ 

	cout<<"The signs are 'X' and 'O' ."<<endl;
	cout<<endl;
	cout<<"player 1 Enter your sign : ";
	cin>>a;
	cout<<"The sign of player 2 is not equal to the sign of player 1."<<endl;
	cout<<"player 2 Enter your sign : ";
	cin>>b;	
}
void display_board(){
	system("cls");
	cout<<"\n    Tic Tac Toe Game"<<endl<<endl;
	cout<<endl;
	cout << "   player 1 =  "<<a<<"    player 2 = "<<b<<endl<<endl;
	cout<<"     |     |     " << endl;
	cout<<"  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;
	cout<<"_____|_____|_____" << endl;
	cout<<"     |     |     " << endl;
	cout<<"  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;
	cout<<"_____|_____|_____" << endl;
	cout<<"     |     |     " << endl;
	cout<<"  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;
	cout<<"     |     |     " << endl << endl;
}
void player1_player2(){
	cout<<"(Player "<<player<<") Enter a number: ";
	cin>>choice;
		if(player == 1)
	{
		switch(choice)
		{
			case 1: 
			if(sq[1]==a||sq[1]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[1] =  a;
			  player = 2;	
			}
			break;
			case 2: 
			if(sq[2]==a||sq[2]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[2] = 'X';
			  player = 2;	
			}
			break;
			case 3: 
			if(sq[3]==a||sq[3]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[3] =  a;
			  player = 2;	
			}
			break;
			case 4: 
			if(sq[4]==a||sq[4]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[4] =  a;
			  player = 2;	
			}
			break;
			case 5: 
			if(sq[5]==a||sq[5]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[5] =  a;	
			  player = 2;
			}
			break;
			case 6: 
			if(sq[6]==a||sq[6]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[6] =  a;
			  player = 2;	
			}
			break;
			case 7: 
			if(sq[7]==a||sq[7]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[7] =  a;
			  player = 2;	
			}
			break;
			case 8: 
			if(sq[8]==a||sq[8]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[8] =  a;	
			  player = 2;
			}
			break;
			case 9: 
			if(sq[9]==a||sq[9]==b)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[9] =  a;
			  player = 2;	
			}
			break;
			default:cout<<"Invalid Move"<<endl;
			system("pause");
			break;
		}
	}
	else
	{
		switch(choice)
		{
			case 1: 
			if(sq[1]==b||sq[1]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[1] =  b;
			  player = 1;	
			}
			break;
			
			case 2: 
			if(sq[2]==b||sq[2]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[2] =  b;	
			  player = 1;	
			}
			break;
			case 3: 
			if(sq[3]==b||sq[3]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[3] =  b;	
			  player = 1;	
			}
			break;
			case 4: 
			if(sq[4]==b||sq[4]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[4] =  b;	
			  player = 1;	
			}
			break;
			case 5: 
			if(sq[5]==b||sq[5]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[5] =  b;
			  player = 1;		
			}
			break;
			case 6: 
			if(sq[6]==b||sq[6]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[6] =  b;
			  player = 1;		
			}
			break;
			case 7: 
			if(sq[7]==b||sq[7]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[7] =  b;	
			  player = 1;	
			}
			break;
			case 8: 
			if(sq[8]==b||sq[8]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[8] =  b;	
			  player = 1;	
			}
			break;
			case 9: 
			if(sq[9]==b||sq[9]==a)
			{
				cout<<"Invalid Move"<<endl;
				system("pause");
			}
			else
			{
			  sq[9] =  b;	
			  player = 1;	
			}
			break;
			
			default:cout<<"Invalid Move"<<endl;
			system("pause");
			break;
		}
}
}
void game_win(){
	if (sq[1] == sq[2] && sq[2] == sq[3])
		win = 1;
	else if (sq[4] == sq[5] && sq[5] == sq[6])
		win = 1;
	else if (sq[7] == sq[8] && sq[8] == sq[9])
		win = 1;
	else if (sq[1] == sq[4] && sq[4] == sq[7])
		win = 1;
	else if (sq[2] == sq[5] && sq[5] == sq[8])
		win = 1;
	else if (sq[3] == sq[6] && sq[6] == sq[9])
		win = 1;
	else if (sq[1] == sq[5] && sq[5] == sq[9])
		win = 1;
	else if (sq[3] == sq[5] && sq[5] == sq[7])
		win = 1;
	else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' &&
    sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
		win = 0;
	else
		win = -1;
}
void game_over(){
		if(win==1)
	{
		if(player == 1)
		{
			player = 2;
		}
		else if(player == 2)
		{
			player = 1;
		}
		cout<<"Player "<<player<<" win "<<endl;	
	}
	else
		cout<<"Game draw"<<endl;
}


int checkwin()
{
if (square[1] == square[2] && square[2] == square[3])

return 1;
else if (square[4] == square[5] && square[5] == square[6])

return 1;
else if (square[7] == square[8] && square[8] == square[9])

return 1;
else if (square[1] == square[4] && square[4] == square[7])

return 1;
else if (square[2] == square[5] && square[5] == square[8])

return 1;
else if (square[3] == square[6] && square[6] == square[9])

return 1;
else if (square[1] == square[5] && square[5] == square[9])

return 1;
else if (square[3] == square[5] && square[5] == square[7])

return 1;
else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
&& square[4] != '4' && square[5] != '5' && square[6] != '6' 
&& square[7] != '7' && square[8] != '8' && square[9] != '9')

return 0;
else
return -1;	
}
void board()
{
system("cls");
cout << "\n\n\tTic Tac Toe\n\n";

cout << "Player 1 ("<<e<<")   -  Player 2 ("<<d<<")"<< endl << endl;
cout << endl;

cout << "     |     |     " << endl;
cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;

cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;

cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

cout << "     |     |     " << endl << endl;
}
void marks ()
{
 	cout<<"The signs are 'X' and 'O' ."<<endl;
	cout<<endl;
	cout<<"player  Enter your sign : ";
	cin>>e;	
	if (e=='X')
	{
		d='O';
	}
	else
	{
		d='X';
	}
}
int main()
{
    int c;
	do 
	{ 
    cout<<endl;
	cout<<"         tic tac toe         \n\n";
	cout<<"*****************************\n";
	cout<<"*   1. player with computer *\n";
	cout<<"*   2. double player        *\n";
	cout<<"*   3. Exit                 *\n";
	cout<<"*****************************\n\n";
	cout<<"Enter your choice : ";
	cin>>c;
	switch(c)
	{
	case 1:
	marks();
do
{
board();

if(gamer%2==1)
gamer=1;
else
gamer=2;
if(gamer==2)
{
cout << "Players  " << gamer<<endl;
cout<<"Press Enter for CPU"<<endl;
option=rand()%9;
mark=d;
int turn=1;
int placed=0;
while(placed==0)
{

if (option == 1 && square[1] == '1') {
square[1] = mark;
placed=1;
}
else if (option == 2 && square[2] == '2'){

square[2] = mark;
placed=1;
}
else if (option == 3 && square[3] == '3'){

square[3] = mark;
placed=1;
}
else if (option == 4 && square[4] == '4'){

placed=1;
square[4] = mark;
}
else if (option == 5 && square[5] == '5'){

square[5] = mark;
placed=1;
}
else if (choice == 6 && square[6] == '6'){

square[6] = mark;
placed=1;
}
else if (option == 7 && square[7] == '7'){

square[7] = mark;
placed=1;
}
else if (option == 8 && square[8] == '8'){

square[8] = mark;
placed=1;
}
else if (option == 9 && square[9] == '9'){

square[9] = mark;
placed=1;
}

else
{
choice=rand()%9;
}
}
i=checkwin();
gamer++;
_getche();
board();
}
else if(gamer==1)
{
cout << "Players  " << gamer << ": Enter a number:  ";
cin >> option;
mar=e;
if (option == 1 && square[1] == '1')

square[1] = mar;
else if (option == 2 && square[2] == '2')

square[2] = mar;
else if (option == 3 && square[3] == '3')

square[3] = mar;
else if (option == 4 && square[4] == '4')

square[4] = mar;
else if (option == 5 && square[5] == '5')

square[5] = mar;
else if (option == 6 && square[6] == '6')

square[6] = mar;
else if (option == 7 && square[7] == '7')

square[7] = mar;
else if (option == 8 && square[8] == '8')

square[8] = mar;
else if (option == 9 && square[9] == '9')

square[9] = mar;
else
{
cout<<"Invalid move ";

gamer--;
_getche();
}
i=checkwin();

gamer++;
}
} 
while(i==-1);
board();
if(i==1)

cout<<"Congratulation! \nPlayer "<<player<<" win ";
else
cout<<"  OOps!\nGame draw";

_getche();
    break;
	case 2:
	X_O();
	do
	{ 
	display_board();
	player1_player2();
    game_win();
	}
	while(win == -1);
	display_board();
	game_over();
	break;
	case 3:
	cout<<"Exiting the game...\nGoodbye!"<<endl;
	break;
	default:
	cout<<"Invalid number."<<endl;
	break;
}
}
while(c!=3);
}
