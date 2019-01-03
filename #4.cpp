#include <iostream>
using namespace std;

int main()
{
    char x;
    cout<< "Input First Character Below"<<endl;
    cin>>x;
    char y;
    cout<< "Input Second Character Below"<<endl;
    cin>>y;
    int xy=int(x);
    int yz=int(y);
    if(xy>yz) 
	{
        int temp = yz;
        yz=xy;
        xy=temp;
        for(int i=xy; i <=yz; i++) 
		{
            char a = i;
            cout<<a;
        }
    } 
	else 
	{
        for(int i = xy; i <= yz; i++) 
		{
            char a = i;
            cout<<a;
        }
    }
    
    return 0;
}
