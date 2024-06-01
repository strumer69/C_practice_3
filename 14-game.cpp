#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

using namespace std;
string weapon[3]={"Rock", "Paper" , "Scissors"};
class Player
{
private:
    string name;
    int selection;
    int wins;
    int draw;
public:
    Player(string);
    void set_selection(int a){selection=a;};
    int get_draw(){ return draw;};
    friend bool operator==(const Player &p1, const Player &p2 );
    friend bool operator >(const Player &p1, const Player &p2);
    friend bool operator >=(const Player &p1, const Player &p2);
    Player operator ++();// Prefix-Operator
    Player operator ++(int);//postfix-operator
    friend istream &operator >> (istream &input, Player &s);
    friend ostream &operator <<(ostream &output,Player &s);
};
Player ::Player (string n){
    wins=0;
    draw=0;
    name=n;
}
bool operator==(const Player &p1, const Player &p2){
    if(p1.selection==0 && p2.selection==0){
        cout << weapon[0]<< " against "<< weapon[0];
        return true;
    }
    else if (p1.selection==1 && p2.selection==1){
        cout << weapon[1]<< " against "<< weapon[1];
        return true;

    }
    else if (p1.selection ==2 && p2.selection ==2)
    {
        cout << weapon[2]<< "against "<< weapon[2];
        return true;
    }
    return false;
}
bool operator > (const Player &p1 , const Player &p2)
{
    if (p1.selection==0 && p2.selection==1)
    {
        return false;
    }
    else if (p1.selection==1 && p2.selection==0)
    {
        cout << weapon[1]<< " beats " << weapon[0];
        return true;
    }
    else if(p1.selection==2 && p2.selection==0)
    {
        return false;
    }
    else if(p1.selection==0 && p2.selection==2)
    {
        cout << weapon[0]<< " beats "<< weapon[2];
        return true;
    }
    else if (p1.selection==1 && p2.selection==2 )
    {
        return false;
    }
    else if (p1.selection==2 && p2.selection==1)
    {
        cout << weapon[2]<< " beats " << weapon[1];
        return true;
    }
    return false;

}
bool operator >= (const Player &p1 , const Player &p2)
{
    if(p1.wins>p2.wins)
    {
        cout <<endl << endl << p1.name<< " wins ! ";
        return true;
    }
    else if (p2.wins> p1.wins)
    {
        cout << endl << endl << p2.name << " wins !";
        return true;
    }
    else 
    {
        cout << endl << endl << "A draw!  there is no winner ";
    }
    return false;
}

Player Player :: operator ++ ()
{
    this -> draw++;
    return *this;
}
Player Player ::operator ++ (int a)
{
    this -> wins ++;
    return * this;
}
istream & operator >>(istream &input , Player &s)
{
    cout << "selectiom " << s.name << endl;
    cout << "[0] Scissors" <<endl;
    cout << "[1] Rock "<< endl;
    cout <<"[2] Paper "<<endl;
    cout << "selection ";

    input >> s.selection;
    return input;
}
ostream &operator << (ostream &output , Player &s)
{
    output << endl<<s.name << ":" <<endl <<" Winner "<< s.wins;
    return output;
}
int main (){
    Player sp("player");
    Player pc("Computer");
    int anzahl=0;
    do 
    {
        // system ("clear");
        cout << "****GAME****"<< endl << endl;
        cin >> sp;
        cout << endl;
        srand(time(NULL));
        pc.set_selection(rand()%3);
        if(sp==pc)
        {
            ++sp;
            ++pc;
        }
        else if(sp>pc)
        {
            sp++;
        }
        else if (pc>sp)
        {
            pc++;
        }
        anzahl++;
        cout << endl <<endl;

    } while(anzahl<5);
    cout <<sp <<endl <<pc <<endl<<endl << "Draw :" << sp.get_draw();
    sp>=pc;
    return 0;
}

