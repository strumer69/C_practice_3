#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
int main (){
    char c , previous ='a';
    ifstream reader;
    ofstream writer;

    reader.open("text.txt" , ios::in);
    writer.open("copy.txt");

    if (reader.good())
    {
        if(writer.good())
        {
            while (reader.get(c))
            {
                if (! (previous== ' ' && c== ' ')){
                    cout <<c;
                    writer.put(c);
                }
                
            
            previous = c;
            }
        }
        else
        cout << "File copy.txt error"<< endl;

        
    }
    else
    cout << "file text.txt error"<<endl;
    reader.close();
    writer.close();
    return 0;
    
}


