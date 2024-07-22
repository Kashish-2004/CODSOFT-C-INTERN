#include<iostream>
using namespace std;
void draw(char board[3][3])
{
    cout<<"--------\n";
    for(int i=0;i<3;i++)
    {
        cout<<"|";
        for(int j=0;j<3;j++)
        {
         cout<<board[i][j]<<"|"; 
        }
        cout<<"\n--------\n";
    }   
}
bool check(char board[3][3],char player)
{
    for (int i=0;i<3;i++)
    {
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player )
        return true;
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player )
        return true;

    }
    if (board[0][0]==player && board[1][1]==player && board[2][2]==player)
    return true;
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
    return true;
    return false;


}
int main()
{
     char board[3][3] = { { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } }; 
    char player='X';
    int row,col,turn;
    cout<<"welcome to tic -tac-toe \n";
    for(turn =0;turn<9;turn ++)
{

    
    draw(board);
    while(true){
       
        cout<<"Player "<<player<<"enter row(0-2) and column(0-2)";
        cin>>row>>col;
        if(board[row][col]!=' '||row<0||col<0||row>2||col>2){
            cout<<"invalid move!! Try again.\n";

        }
        else {
            break;
        }
        



    }
  board[row][col]=player;

if(check(board,player)){
    draw(board);
    cout<<"Player"<<player <<"wins\n";
   break;

}
player=(player=='X')?'O':'X';
}
draw(board);
if(turn==9 && !check(board,'X')
&& !check(board,'O')){
    cout<<"it is a draw";

}
return 0;
    

}
