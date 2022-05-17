//friend class
//is class a specifies the b as a friend classs then the class b can access all private and protected membres of the classs
//considered against the encapsulation and oop concept 
//java does not supprt the friend class concept 

#include <bits/stdc++.h>
using namespace std;
// class employee;
// class printer
// {
//     public:
//     void printEmp(const Employee $e);

// };

//friend class can access the private and protected membres of the class in which he is consideres as the friend
//declaration -->suppose a is friend of b
class company
{
    long long grossprod=10e7;
    long long turnover=10e9;
     friend class manager;
    public:
   void getFeatures()
    {
        cout<<"our company is making and expotential growth\n";
        
    }
   

};

//friends in this is granted , not mutual , not transitivem and not inherited 
class manager
{
    public:
    
    void showdata(company &c1)
    {
        cout<<"the gross production of the company is "<<c1.grossprod<<endl;
        c1.getFeatures();

    }

};

int main(){
   manager m;
   company c1;
   m.showdata(c1);

return 0;
}