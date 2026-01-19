#include<iostream>
#include<cmath>
using namespace std;
class simple_calculator{
protected :
int a,b;
public:
void setsimple_data(){
    cout<<" enter value fo a and  b";
    cin>>a>>b;
}
void showsimple_data(){
    cout<<" simple calculator"<<endl;
    cout<<"addition = "<<a+b<<endl;
    cout<<"subtraction = "<<a-b<<endl;
    cout<<"multiplication = "<<a*b<<endl;
    if(b!=0){
    cout<<"divison = "<<a/b<<endl;
}
else{
    cout<<" divison=not possible";
}
cout<<endl;
}
};



class scientific_calculator{
protected :
int x,y;
public:
void setscientific_data(){
    cout<<" enter value fo x and  y";
    cin>>x>>y;
}
void showscientific_data(){
    cout<<" scientific calculator"<<endl;
    cout<<"power = "<<pow(x,y)<<endl;
    cout<<"square root of x = "<<sqrt(x)<<endl;
    cout<<"sin of x (sin(x)) = "<<sin(x)<<endl;
 cout<<"cosin of x (sin(y)) = "<<cos(y)<<endl;
}
};
class hybrid_calculator: public simple_calculator,public scientific_calculator{
public:
void display_All(){
    showsimple_data();
    showscientific_data();
}
};
int main()
{
    hybrid_calculator calc;
    calc.setsimple_data();
    calc.setscientific_data();
    calc.display_All();
 return 0;
}














