#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
class Comp
{
    private:
    int x;
    int y;
    public:
    Comp()       //simple constructor
    {
        x=0;
        y=0;
    }
    Comp(int x,int y)   //parametrised constructor
    {
      this-> x=x;
        this->y=y;
    }

    void getdata(int &c,int &d,int &a,int &b)
    {
        cout<<"Enter the real part of the number 1\n";
        cin>>c;
        cout<<"Enter the imaginary part of the number 1\n";
        cin>>d;
        cout<<"Enter the real part of the number 2\n";
        cin>>a;
        cout<<"Enter the imaginary part of the number 2\n";
        cin>>b;

    }
    void add()
    {
        int c,d,a,b;
        getdata(c,d,a,b);
        x=c+a;
        y=d+b;
        cout<<x<<showpos<<y<<"i"<<endl;
    }

    //same for subtraction,multipication, division 


};
int main(){
    Comp c1;
    c1.add();
return 0;
}