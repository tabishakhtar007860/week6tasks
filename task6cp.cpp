#include <iostream>
using namespace std;
main()
{
    string month;
    int stays,charges1,charges2;
    cout<<"enter month name:";
    cin>>month;
    cout<<"enter number of stays:";
    cin>>stays;
    if(month== "may" || month == "october" && stays >7 && stays <14)
    {
        charges1=((50*stays)-(50*stays*5)/100);
        charges2=(65*stays);
    }
    if( month == "may" || month == "october" && stays >14)
    {
         charges1=((50*stays)-(50*stays*30)/100);
         charges2=((65*stays)-(65*stays*10)/100);
    }
    if(month == "june" || month == "september" && stays>14)
    {
         charges1=((75.2*stays)-(75.2*stays*20)/100);
         charges2=((68.7*stays)-(68.7*stays*10)/100);
    }
    if(month == "july" || month == "august")
    {
                 charges1=(76*stays);
         charges2=((77*stays)-(77*stays*10)/100);
    }
    cout<<"studio :"<<charges1<<"$"<<endl<<"appartment:"<<charges2<<"$";

}