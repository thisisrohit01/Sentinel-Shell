#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string input;
    cout<<"---Welcome to Sentinel Shell---"<<'\n';
    while(true)
    {
        cout<<"sentinel>";
        getline(cin, input);

        stringstream ss(input);
        string command;
        ss >> command;
	if (command.empty())
        {continue;}

        else if(command=="exit")

        {
            cout<<"Goodbye \n ";
            break;
        }
        else if(command=="help")
        {
            cout<<"---sentinel shell help menu---\n";
            cout<<"clear: clear the screen\n";
            cout<<"help: open this window\n";
            cout<<"say [text]: repeats the test back\n ";
            cout<<"exit: exit the shell\n";
        }
        else if (command=="clear")
        {
            system("clear");
        }
        else if(command=="say")
        {
            string remainder;
	    ss>>ws;
            getline(ss, remainder);
            cout<<remainder<<'\n';
        }
        else
        {
            
            cout<<"sentinel: command not found "<<command <<'\n';
            

        }
    }
    return 0;
}
