#include <iostream>
using namespace std;
void late(int hoursS,int minsS,int hoursA,int minsA );
void ontime(int hoursS,int minsS,int hoursA,int minsA );
void early(int hoursS,int minsS,int hoursA,int minsA );
main()
{
    int hoursS,minsS,hoursA,minsA;
    cout<<"Exam starting time(hours): ";
    cin>>hoursS;
    cout<<"Exam starting time(minutes):";
    cin>>minsS;
    cout<<"Student hours of arrival: ";
    cin>>hoursA;
    cout<<"Student minutes of arrival: ";
    cin>>minsA;
    late(hoursS,minsS,hoursA,minsA);
    ontime(hoursS,minsS,hoursA,minsA);
    early(hoursS,minsS,hoursA,minsA);


}
void late(int hoursS,int minsS,int hoursA,int minsA )
{
    int hours;
    int minutes;
    if (hoursS==hoursA && minsA>minsS )
    {
       minutes=minsA-minsS;
       cout <<"LATE"<<endl;
       cout<<minutes<<" minutes after the start.";
    }
    else if (hoursA>hoursS && minsA>minsS)
    {
       hours=hoursA-hoursS;
          minutes=minsA-minsS;
          cout<<"LATE"<<endl;
          cout<<hours<<":"<<minutes<<" hours after the start.";
       
    }
    else if (hoursA>hoursS && minsA<minsS)
    {
        minutes=(60-minsS)+minsA;
        cout <<"LATE"<<endl;
        cout<<minutes<<" minutes after the start.";
    }
}
void ontime(int hoursS,int minsS,int hoursA,int minsA )
{
    int starts=hoursS*60+minsS;
    int arrivals=hoursA*60+minsA;
    if (hoursA==hoursS && minsA==minsS )
    {
        {
           cout<<"ON TIME"<<endl;
        }
    }
    else if (hoursA==hoursS )
    {
        if (minsA<minsS)
        {
           int on=minsS-minsA;
           if (on<=30)
           {
              cout<<"ON TIME"<<endl;
              cout<<on<<" minutes before the start.";
           }   
        }
    }
    else if (hoursA<hoursS)
    {
        int on=starts-arrivals;
        if(on<=30)
        {
           cout<<"ON TIME"<<endl;
           cout<<on<<" minutes before the start.";
        }
    }
    
}
void early(int hoursS,int minsS,int hoursA,int minsA )
{
     int starts=hoursS*60+minsS;
     int arrivals=hoursA*60+minsA;
     int on=starts-arrivals;
     int hours;
     if (hoursS==hoursA && minsA<minsS)
     {
        if (on>30)
        {
            
           cout<<"EARLY"<<endl;
           cout<<on<<" before the start.";
        }  
     }
     else if (hoursS>hoursA)
     {
        if (on>30 && on<60)
        {
            cout<<"EARLY"<<endl;
            cout<<on<<" before the start.";
        }
        else if (hoursS>hoursA)
        {
            if (on>=60)
            {
              int min;

              hours=(hoursS-hoursA);
              min=on-(hours*60);
              cout<<"EARLY"<<endl;
              cout<<hours<<":"<<min<<" hours before the start.";
            }
        }
     }

}