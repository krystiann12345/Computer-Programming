#include <iostream>

using namespace std;

int main()
{
    int choice;
    int payment;
    int Coke=45;//cost of coke
    int Royal=60;//cost of royal
    int Pepsi=55;//Cost of pepsi//
    int change;

    //The choices displayed for user to see//
    cout <<"=========================="<<endl<<
           "=Please Select your order=" << endl
         <<"=========================="<<endl;
    cout<<"[1]Coke(P45)"<<endl << "[2]Royal(P60)"<<endl << "[3]Pepsi(P55)"<<endl;

    //Where the user will input his/her selected drinks//
    cout<<"\nChoice:";
    cin >>choice;

         //switch//
    switch(choice){
        case 1:
            cout<<"payment:";//The user's inputted payment//
            cin>>payment;
            change=payment-Coke;
            if(payment<Coke){
                cout<<"Not Enough Funds!"<<endl;
            }
            else{
                cout<<"You Have ordered Coke!"<<endl<<"Change:"<<change<<endl;
            }
        break;
        case 2:
            cout<<"payment:";//The user's inputted payment//
            cin>>payment;
            change=payment-Royal;
            if(payment<Royal){
                cout<<"Not Enough Funds!"<<endl;
            }
            else{
                cout<<"You Have ordered Royal!"<<endl<<"Change:"<<change<<endl;
            }
        break;
        case 3:
            cout<<"payment:";//The user's inputted payment//
            cin>>payment;
            change=payment-Pepsi;
            if(payment<Pepsi){
                cout<<"Not Enough Funds!"<<endl;
            }
            else{
        cout <<"You have ordered Pepsi!"<<endl<<"Change:"<<change<<endl;//user pick Pepsi
            }
        break;

        //if the  input is invalid//
        default:
        cout << "Your input is invalid!"<<endl;
        break;
    }
    return 0;
}
