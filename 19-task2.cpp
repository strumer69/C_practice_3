#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Participant
{
    public:
        string FirstName;
        string SurName;
        int Number ,Height ,Weight ,Points ,YearOfBirth;
        friend istream &operator >>(istream &is , const Participant &dt);
};
istream &operator>>(istream &is,Participant & dt)
{
    cout << " First Name: ";
    is >> dt.FirstName;

    cout <<" SurName : ";
    is >> dt.SurName;

    cout <<" Number:";
    is >> dt.Number;

    cout <<" Height:";
    is >> dt.Height;

    cout <<" Weight:";
    is >> dt.Weight;

    cout <<" Points:";
    is >> dt.Points;

    cout <<" YearOfBirth:";
    is >> dt.Number;
    
    return is;
}


int main()
{
    
    do
    {
        cout << endl <<endl << endl << endl;
        cout << "-----MENU-----" << endl;
        cout << "[1] Creat Player" << endl;
        cout << "[2] Manage combat Game" << endl;
        cout << "[3] Output of all players" << endl;
        cout << "[4] Output winner."<<endl;
        cout << "[5] Exit" << endl<< endl;
        cout<<"Please select: " << endl;
        
        int select;
        cin >> select;

        switch (select){
            case 1:
                Participant dt;
                cin >> dt;
                break;
            
            case 2:            
                break;
            
            case 3:
            
                break;
            case 4:

                break ;
            case 5:
                cout <<"Good Bye"<<endl;
                return 0;
        
            default: 
                cout << "wrong selection!" << endl;
        }
    
    } while (select != 0); 

return 0;
}

