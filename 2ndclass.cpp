#include<iostream>
#include<string>
using namespace std;

class animals {
    public :
    int code;
    int entryNo;
    void setAnimalData(int code1, int entryNo);     //declaration of function in public 
    void getData();

    public :
    string name;
    string catogary;
    string type;
    
    
};
   void animals :: setAnimalData(int code1 , int entryNo1){
       code = code1;
       entryNo = entryNo1;
        cout<<code<<endl;
        cout<<entryNo<<endl;
   }

    void animals :: getData(){
        cout<<name<<endl;
        cout<<catogary<<endl;
        cout<<type<<endl;
    }



int main()
{
    animals dog;
    
     //dog.code = 234  //it is not allowed because variables are declared in private 
     dog.name = "tommy";
     dog.catogary = "pet animal";
     dog.type = "herbivour animal";  
    dog.getData();
    dog.setAnimalData(253, 102893); 
    
   return 0;
}