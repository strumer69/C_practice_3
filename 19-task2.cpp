#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Participant
{
    public:
        string FirstName;
        string SurName;
        bool Wins;
        int Number,Height,Weight,YearOfBirth,Ngames,Ties,Points,selection;
        friend istream &operator >>(istream &is , const Participant &par);
        friend ostream &operator << (ostream &os , const Participant &par);

        //constructor
        Participant(string fn="", string sn="",bool wins_=false , int n=0,int h=0, 
                     int w=0 , int y=0 , int ng=0 , int t=0, int p=0, int s=0)
                     :FirstName(fn),SurName(sn),Wins(wins_),Number(n),Height(h),
                     Weight(w),YearOfBirth(y),Ngames(ng),Ties(t),Points(p),selection(s){}

};
istream & operator >>(istream &is , Participant &par)
{

    cout << " First Name: ";
    is >> par.FirstName;

    cout <<" SurName : ";
    is >> par.SurName;

    cout <<" Number (1 to 6):";
    is >> par.Number;

    cout <<" Height in cm:";
    is >> par.Height;

    cout <<" Weight in kg:";
    is >> par.Weight;

    cout <<" YearOfBirth:";
    is >> par.Number;
    
    return is;
}
bool operator >= (const Participant &p1 , const Participant &p2)
{
    if(p1.Wins)
    {
        cout <<endl << endl 
        << "Player "<< p1.FirstName<< " "<< p1.SurName
        <<" has won, he/she is " <<abs(p1.Height-p2.Height);
        if (p1.Height> p2.Height)
        {
            cout<<" cm taller and ";
        }
        else if(p1.Height<p2.Height)
        {
            cout<< "  cm shorter and ";
        }
        else
        {
            cout<< " cm taller or shorter and ";
        }

        cout << abs(p1.Weight-p2.Weight);
        if (p1.Weight> p2.Weight)
        {
            cout<<" kg heavier than ";
        }
        else if(p1.Weight<p2.Weight)
        {
            cout<< "  kg lighter than ";
        }
        else
        {
            cout<< " kg heavier or lighter than ";
        }
        cout << "Player "<< p2.FirstName<< " "<< p2.SurName<<"."<<endl;
        
        return true;
    }
    else if (p2.Wins)
    {
        cout <<endl << endl 
        << "Player "<< p2.FirstName<< " "<< p2.SurName
        <<" has won, he/she is " <<abs(p2.Height-p1.Height);
        if (p2.Height> p1.Height)
        {
            cout<<" cm taller and ";
        }
        else if(p2.Height<p1.Height)
        {
            cout<< "  cm shorter and ";
        }
        else
        {
            cout<< " cm taller or shorter and ";
        }

        cout << abs(p2.Weight-p1.Weight);
        if (p2.Weight> p1.Weight)
        {
            cout<<" kg heavier than ";
        }
        else if(p2.Weight<p1.Weight)
        {
            cout<< "  kg lighter than ";
        }
        else
        {
            cout<< " kg heavier or lighter than ";
        }
        cout << "Player "<< p1.FirstName<< " "<< p1.SurName<<"."<<endl;
        return true;

        
    }
    else 
    {
        cout << endl << endl << "A draw!  there is no winner "<<endl;
    }
    return true;
}


ostream &operator<<(ostream &os,Participant & par)
{
    os<< par.FirstName << " " 
    <<par.SurName << ","
    <<par.YearOfBirth<<","
    <<par.Height <<" cm,"
    <<par.Weight<< "kg, participated in "
    <<par.Ngames << " combat games: "
    <<par.Wins << " x won,"
    <<par.Ties << " x tie = "
    <<par.Points << " Points."<<endl;
    return os;
    
}


int main()
{
    Participant players[6];
    int i=0;//for participation array insertion
  do
  {
    cout << "***GAME***"<<endl;
    cout << endl << endl;
    cout << "[1] Creat Player" << endl;
    cout << "[2] Manage combat Game" << endl;
    cout << "[3] Output of all players" << endl;
    cout << "[4] Output winner."<<endl;
    cout << "[5] Exit" << endl<< endl;
    cout<<"Please select: " << endl;
    int selection=0;
    cin >>selection;
    switch (selection)
    {
    case 1:
        if (i!=6){
            cin >> players[i];
            i++;
        } else{
            cout<< "max of participants reached!!"<<endl;
        }
    break;
    case 2:
        cout<< "***Manage Game Combat***"<<endl<<endl;
        cout << "Enter a number (1 to 6) "<<endl;
        cout<< "player first:";
        int f;
        cin >> f;
        cout << "Enter a number (1 to 6) "<<endl;
        cout<< " player second:";
        int s;
        cin >>s;
        players[f].Wins=0;
        players[s].Wins=0;
        
        cout << " what is the result? "<<endl;
        cout<<"[1] first player wins" <<endl;
        cout<<"[2] second player wins "<<endl;
        cout<<"[3] draw or equality"<<endl;
        int cr;//combat result
        cin >>cr;
        if (cr==1)
        {
            players[f].Points+=10;
            players[f].Wins=1;
        }
        else if(cr==2)
        {
            players[s].Points+=10;
            players[f].Wins=1;
        }
        else if (cr==3)
        {
            players[f].Points+=5;
            players[s].Points+=5;
        }
        else{
            cout<<"wrong selection!!"<<endl;
        }

        players[f-1]>=players[s-1];
        break;
    case 3:
        for (int j=0 ; j < 6;j++)
        {
            cout<< players[j];
        }
        

        break;


    case 5:
        cout <<"good Bye";
        return false;
    
    default:
        cout << " wrong selection ";
    break;
    }

    // input >> s.selection;
    // return input;
    // cin>> players[0];

    false;
  } while (true);
  

return 0;
}   

