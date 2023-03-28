#include<iostream>
//#include "hero.cpp"
using namespace std;

class hero{
    private:
      int health;
public:
        char level;
    hero(){
        cout<<"chalo ok"<<endl;
    }    
    hero(int health)
    {
       cout<<"this is:  "<<this<<endl;
       this->health=health;
    }
    hero(int health,char level)
    {
       cout<<"this is:  "<<this<<endl;
       this->health=health;
       this->level=level; 
    }

    int gethealth(){
        return health;
          }
    char getlevel(){
        return level;
}
    void sethealth(int h){
        
    health=h;
// health=0;
}
    void setlevel(char l){
        level=l;
}
};

 int main() {
   hero lucky;
hero temp(22,'C');
cout<<temp.gethealth()<<endl;
cout<<temp.level<<endl;
   /*   hero lucky(10);
      cout<<"addres of lucky is: "<<&lucky<<endl;
       lucky.gethealth();
cout<<"health of lucky is: "<<lucky.gethealth()<<endl; */

      //dynamically allocating
    //   hero a;
    //   a.sethealth(100);
    //   a.setlevel('1');
    //   std::cout << "helth of a: "<<a.gethealth() << std::endl;
    //   std::cout << "level of a: "<<a.level << std::endl;
    //   hero *b=new hero;
    //   (*b).sethealth(200);
    //   (*b).setlevel('2');
    //   cout<<"health of b: "<<b->gethealth()<<endl;
    //   cout<<"level of b: "<<b->level<<endl;
//             string str;
//       cin>>str;
//       lucky.sethealth(100,str);

// cout<<lucky.gethealth()<<endl;
// lucky.setlevel(10);
// cout<<lucky.getlevel()<<endl;

    return 0;
 }
 //padding
 //greddy eliment