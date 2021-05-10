// in this we will look at the acess specifires 
// there are three types of acess specifiers
// 1.protected
// 2.private
// 3.public
// lets discuss them with  example 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
class design_y12
{
    protected :
    string battery="4000mvh";
    string system_apps = "hotgames";
    private :
    int ram = 4;
    public :
    string music_player = "musicsystem";
    string calculator = "calci";
    string camera = "6megapixels"; 

    // private protected and public variables are accessed inside only in that particular function 
    // that mean we can update the values of this varaibles in the class 
    // private and protected variables cannot be accesed by the object of the class. object of class can acess only the public variables 


};
class design_y15 :public design_y12
{
       private :
       int ram = 6;
    //    derived class cannot acess the private variables of the parent class,it can acess only the public and protected 
};

int main() 

{
         
  design_y12 saisri;
  design_y15 brahmam;

//   lets get the attributes of the object saisri 
 cout<< saisri.calculator<<endl;
 cout<< saisri.music_player<<endl;
 cout<< saisri.camera<<endl;

 //lets get the attributes of the object brahmam
 cout<< brahmam.calculator<<endl;
 cout<< brahmam.camera<<endl;
 cout<< brahmam.music_player<<endl;

  
        


          return 0;

}
