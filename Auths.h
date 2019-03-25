#include<iostream>
#include<fstream>
#include<stdlib.h>
#define U cin>>user;
#define P cin>>psw;
#define FU fout<<user;
#define FP fout<<psw;
#define SU system("node auth");
using namespace std;
static int auth = 0;
ofstream fout;
ifstream fin;

class Auths{
    ofstream fout;
    ifstream fin;
     string user, psw;
    int f;
    public:
    bool Register(){
    cout<<"Enter the valide Email\n";
    U;
    cout<<"Enter password which you want (atleast 6 characters)\n";
    P;
    fout.open("stuff/demo.txt");
    FU;
    fout.close();
    fout.open("stuff/demo2.txt");
    FP;
    fout.close();
    cout<<"\nPlease wait we are creating your account...\n";    
    system("node register");
    //successfull registration
    fin.open("stuff/validRegister.txt");
    fin>>f;
    if(f == 1)
            return true;
          else 
            return false;
}
    bool LogIn(){
    //log in part
    cout<<"Enter your Email\n";
    U;
    cout<<"Enter password\n";
    P;
    fout.open("stuff/demo.txt");
    FU;
    fout.close();
    fout.open("stuff/demo2.txt");
    FP;
    fout.close();
    cout<<"Checking for authentication....\n";    
    SU;
    //validation part
    fin.open("stuff/valide.txt");
    fin>>f;
    fin.close();
        if(f == 1)
            return true;
        else 
            return false;
}
    bool Logout(){
        f = 0;
        fin.open("stuff/valide.txt");
        fin>>f;
        fin.close();
        if(f == 1){
        SU;
        cout<<"logged out :)\n";
        }
        else 
           cout<<"-->  You are not Logged in <--\n";
        //system("cls");
    }
};
