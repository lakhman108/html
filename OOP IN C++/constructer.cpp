#include <iostream>

using namespace  std;
 class Hero{
    public:
    int health;
    char level;
    Hero(){
cout<<"constructor called"<<endl;
    }
Hero(int health,char level)
{
    this->health=health;
    this->level=level;
}
void print(){
    cout<<health<<endl;
    cout<<level<<endl;
}
 };

int main()
{
//Hero suresh;
Hero S(100,'C');
cout<<S.health<<endl;
cout<<S.level<<endl;
//copy constucter
Hero R(S);
R.print();
return 0;}
