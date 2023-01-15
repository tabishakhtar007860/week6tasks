#include <iostream>
using namespace std;
main()
{
char day,service;
int minutes,charges;
cout<<"enter service type p for premium and r for Residental:";
cin>>service;
cout<<"enter day or night:";
cin>>day;
cout<<"enter number of min you used the service:";
cin>>minutes;
if(service == 'r' )
{
    if( minutes <= 50)
    {
        charges = 10;
    }
    if(minutes >50 )
    {
        charges =10+(minutes-50)*0.20;
    }

}
if(service == 'p')
{
        if(day == 'd')
        {
            if( minutes<= 75)
            {
                charges=25;
            }
            if(minutes > 75 )
            {
                charges = 25 +(minutes - 75)*0.10;
            }
        }
        if(day == 'n')
        {
             if( minutes<= 100)
            {
                charges=25;
            }
            if(minutes > 75 )
            {
                charges = 25 +(minutes - 75)*0.05;
            }
        }

}

cout<<charges;




}