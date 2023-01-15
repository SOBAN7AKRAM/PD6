#include <iostream>
using namespace std;
string activity(string temperature,string humidity);
main ()
{
   string temp,humidity,result;
   cout<<"Enter temperature:";
   cin>>temp;
   cout<<"Enter humidity:";
   cin>>humidity;
   result=activity(temp,humidity);
   cout<<result;

}
string activity(string temperature,string humidity)
{
    string activities;
    if (temperature=="warm" && humidity=="dry")
    {
        activities ="Play Tennis";
    }
    else if (temperature=="warm" && humidity=="humid")
    {
        activities="Swim";
    }
    else if (temperature=="cold" && humidity=="dry")
    {
        activities="Play basketball";
    }
    else if (temperature=="cold" && humidity=="humid")
    {
        activities="Watch TV";
    }
    return activities;
}