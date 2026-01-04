#include<iostream>
#include<string>
using namespace std;
int main()
{
    string command;
    cout<<"---Welcome to Sentinel Shell---"<<'\n';
    while(true)
    {
        cout<<"sentinel>";
        getline(cin, command);
        if(command=="exit")

        {
            cout<<"Goodbye \n ";
            break;
        }
        else if(command=="help")
        {
            cout<<"---sentinel shell help menu---\n";
            cout<<"clear: clear the screen\n";
            cout<<"help: open this window\n";
            cout<<"exit: exit the shell\n";
        }
        else if (command=="clear")
        {
            system("clear");
        }
        else
        {
            
            cout<<"sentinel: command not found"<<command <<'\n';
            

        }
    }
    return 0;
}
