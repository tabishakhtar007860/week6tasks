#include <iostream>
using namespace std;
main()
{
int x ,y,h;
cout<<"enter h";
cin>>h;
cout<<"enter x:";
cin>>x;
cout<<"enter y:";
cin>>y;

if(x > (h*1) && x < h*2 && y < h*4 && y >= h*1 )
{
    cout<<"inside  ";
}
else if(x > 0*h && x < h*3 && y > 0 && y < h*1)
{
    cout<<"inside";
}
else if(x == h*1  || x == h*2 && y <= h*4 && y >= h*1 )
{
    cout<<"Border  ";
}
 else if(x <= h*2 && x >= h*1 && y == 4*h && y == h*0)
{
    cout<<"border";
}
else  if(x == 0 || x == h*3 && y >= h*0 && y <= h*1)
{
    cout << "border ";
}
else if(y == h*1 || y==0 && x<=1 &&x>=0 )
  {
    cout<<"border";
  }           
else if( y == h*1 || y==0 && x<=3 &&x>=2 )
{
    cout<< "border";
}
else {
    cout<<"outside";
}
        


}