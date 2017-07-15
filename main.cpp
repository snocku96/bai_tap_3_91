#include <iostream>

using namespace std;
void ckecking_password(string x,string y)
{
    string username;
    string password;
    while(1)
    {
        cout << "Enter your username: ";
        cin >>username;
        if(username==x)
        {
            cout <<"Enter your password: ";
            cin >>password;
            if(password==y)
            {
                cout <<"Access Allowed";
                break;
            }
            else
            cout <<"Wrong Password";
        }
        else
            cout <<"Username do not exist! Enter again!"<<endl;
    }
}

int main()
{

    ckecking_password("huy","1");
    return 0;
}
