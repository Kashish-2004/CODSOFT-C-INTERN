#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
   int num,guess;
   cout<<"\t\twelcome to number guessing game\t\t"<<endl;
   cout<<"you can guess a number between 1 to 100:"<<endl;

   num=(rand()%(100-1)+1); 
label:
   cout<<endl;
   cout<<"enter number of your choice between 1 to 100:"<<endl;
   cin>>guess;
   
   if(guess==num)
   {
    cout<<"congratulations! You have guessed the number right!!"<<endl<<num<<" is the secret number!!"<<endl;

   }
   else if(guess>num)
   {
      cout<<"guessed number" <<guess<<"is too high!!";
      goto label;

   }
   else {
    cout<<"guessed number"<<guess<<"is too low"<<endl;
    goto label;

   }
  return 0;
}