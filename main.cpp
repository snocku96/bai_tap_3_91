#include <iostream>

using namespace std;
int getValue(int x)
    {
        int result = x + 10;
        return result;
    }
void calculator()
    {
        int x,y;
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
        int S =x*y;
        cout <<"x*y= "<<S<<endl;
        cout <<"***************"<<endl;
    }
void lyrics_of_song()
    {
       cout << "These are entire rylics of 99 bottles of beer ";
    int i=99;
    while (i>0){
        cout <<i <<" bottle of beer on the wall" <<","<<""<<i<<" bottle of beer.";
        cout <<'\n';
        if(i>1){
        cout <<"Take one down and pass it around"<<","<<""<<i-1<<" bottle of beer on the wall.";
        cout <<'\n';
        }
        i--;
    }
        cout <<"Take one down and pass it around, no more bottle of beer on the wall."<<endl;
        cout <<"No more bottles of beer on the wall, no more bottles of beer. "<<endl;
        cout <<"Go to the store and buy some more, 99 bottles of beer on the wall.";
    }
int main()
{
    int x,y;
    cout<< "when x =5, the result is "<<getValue(5)<<endl;
    calculator();
    lyrics_of_song();

    return 0;
}
