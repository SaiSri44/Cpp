// in this we will look at the inhertience
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class keypad_mobile
{
public:
  string name = "keypad";
  int price = 1000;
  void call()
  {
    cout << "we can make a call" << endl;
  }
  void music()
  {
    cout << "this can play music" << endl;
  }
};

class touch_screen_mobile : public keypad_mobile //this is the syntax for inherting one class into the other class
// in this , we are inherting the keypad_mobile class into the touch_screen_mobile class
{
        public :
         string name1 = "touchscreen_mobile";
         int price1 = 15000;
         void applications()
         {
           cout<< "we can install apps other than the system apps"<<endl;
         } 
         void update()
         {
           cout<< "we can update the operating system"<<endl;
         }
         void lock()
         {
           cout<< "there are different types of locks like , fingerprint, facelock,pattern,pin "<<endl;
         }
};

int main()

{

  keypad_mobile k;
  touch_screen_mobile t; //object of the touch screen class
  cout<< t.name1<<endl; //attribute of the touch_screen_class
  cout<< t.name<<endl;   //attribute of the keypad_mobile class
  t.call(); //method of keypad clas
  cout<<"\n"<<endl;
  t.applications(); //method of touch_screen clas
  cout<< "\n"<<endl;
  t.lock(); //method of touch_screen clas
  cout<< "\n"<<endl;
  t.music(); //method of keypad class
  cout<< "\n"<<endl;
  t.update(); //method of touch_screen class
  cout<< "\n"<<endl;
  cout<< t.price1<<endl; ///attribute of the touch_scren class
  cout<< t.price<<endl; //attribute of the keypad class
  
  return 0;
} 