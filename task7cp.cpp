#include  <iostream>
using namespace std;
main()
{
int hour1 ,minute1,hour2,minute2;
cout<<"enter starting time hours:";
cin>> hour1;
cout<<"enter stsrting time minutes:";
cin>> minute1;
cout<<"enter arrival time hours:";
cin>> hour2;
cout<<"enter arrival time minutes:";
cin>> minute2;
int min,min1,min2;
min1= hour1*60 + minute1;
min2 = hour2*60 + minute2;
if(min1 > min2)
{
    min = min1 - min2;
    

    if(min <= 30 )
    {
        cout<<"Early"<<min/60<<"hours "<<min%60<<"minutes";
    }
    else if(min > 30)
    {
          cout<<"too early "<<min/60<<"hours "<<min%60<<"minutes";
    }
}
if(min1 < min2)
{
min = min2 - min1;
cout<<" late "<<min/60<<"hours "<<min%60<<"minutues";

}
if(min1 == min2)
{
    cout<<"on time";
}
}