#include <iostream>
using namespace std;
main()
{
    int x,y,h;
    cout<<"Enter the value of h:";
    cin>>h;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    if ((x>0 && x<3*h) && (y>0 && y<h ))
    {
        cout<<"INSIDE";
    }
    else if ((x>h && x<2*h) && (y>h && y<4*h))
    {
        cout<<"INSIDE";
    }
    else if ((x==h || x==2*h) && (y>=h && y <=4*h) )
    {
        cout <<"BORDER";
    }
    else if ((x==0 || x==h || x==2*h || x==3*h) && (y==0 || y==h))
    {
        cout<<"BORDER";
    }
    else 
    {
        cout<<"OUTSIDE";
    }
}