#include <iostream>
using namespace std;
float regular(float mins);
float premium(char time,float mins);
main()
{
    char time,type;
    float mins,totalprice;
    cout<<"Enter which type of customer you are (premium or regular) Select (R/P): ";
    cin>>type;
    cout <<"Press D for day time or N for night time:";
    cin>>time;
    cout <<"Enter number of minutes you used the services:";
    cin>>mins;
    if (type=='R')
    {
        totalprice=regular(mins);
        cout <<"The charges are:"<<totalprice<<"$";
    }
    else if (type=='P')
    {
        totalprice=premium(time,mins);
        cout<<"The charges are:"<<totalprice<<"$";
    }
    else 
    {
        cout<<"error";
    }

}
float regular(float mins)
{
    float price;
    if (mins<=50)
    {
        price=10;
    }
    else if (mins>50)
    {
        float Tmins=mins-50;
        price=10+(Tmins*0.20);
    }
    return price;
}
float premium(char time,float mins)
{
    float price;
    if (time=='D')
    {
       if (mins<=70)
       {
          price=25;
       }
       else if (mins>70)
       {
          float Tmins=mins-70;
          price=25+(0.10*Tmins);
       }  
    }
    else if (time=='N')
    {
       if (mins<=100)
       {
          price=25;
       }
       else if (mins>100)
       {
          float Tmins=mins-100;
          price=25+(0.05*Tmins);
       }  
    }
    else
    {
        cout <<"Error";
    } 

    return price;
}