#include <iostream>

using namespace std;

int area(int l,int b=2,int h=2);

int main(){
    int a,b;
    cin>>a>>b;
    cout<<area(a,b)<<endl;
}

int area(int l,int b,int h)
{
    return l*b*h;
}