#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string question[]={"When was C++ invented ? \n",
                        "Who invented C++ ? \n",
                        "What is the predecessor of C++? \n",
                        "What is the memory size in bytes of integer in C++ ? \n"};
    string options[4][4]={
                        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
						{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
						{"A. C", "B. C+", "C. C--", "D. B++"},
                        {"A. 2", "B. 4", "C. 6", "D. 1"}
                        };
    char correct[]={'C','B','A','B'};
    char choise;
    int score=0;
    int size=sizeof(question)/sizeof(question[0]);
    for(int i=0;i<=size-1;i++)
    {
        cout<<question[i]<<'\n';
        for(int j=0;j<=3;j++)
        {
            cout<<options[i][j]<<'\n'; 
        }
        cout<<"Your Choise : ";
        cin>>choise;
        choise=toupper(choise);
        if(choise==correct[i])
        {
            cout<<"correct\n";
            score++;
        }
        else
        {
            cout<<"incorrect\n";
        }
    }
        cout<<"Thanks for playing:\n"<<"Your Score: "<<score<<"/4\n";
        return 0;



}
