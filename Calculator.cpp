#include<iostream>
using namespace std;
int main()
{
    int a,b,ans,choice;
    do{
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Division";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter two numbers:";
            cin>>a>>b;
            ans=a+b;
            cout<<"sum is"<<ans;
            break;

            case 2:
             cout<<"enter two numbers:";
            cin>>a>>b;
            ans=a-b;
            cout<<"difference is"<<ans;
            break;
            
            case 3:
             cout<<"enter two numbers:";
            cin>>a>>b;
            ans=a*b;
            cout<<"multiplication is"<<ans;
            break;

            case 4:
             cout<<"enter two numbers:";
            cin>>a>>b;
            ans=a/b;
            cout<<"division is"<<ans;
            break;

            case 0:
            exit(0);
            default:
            cout<<"please enter valid choice:";


        }
     } while(choice!=0);
     return 0;
    
}
