#include <iostream>
#include <string>
using namespace std;

class User{
    private:
        int id;
        string password;

    public:
        string username;
        User(int id){
            this->id = id;
        }

        //setter for password
        void setPassword(string password){
            this->password = password;
        }

        //getter for password
        string getPassword(){
            return password;
        }
};

int main(){
    User u1(12345);
    u1.username = "vanilla";
    u1.setPassword("pass1234");
    cout<<"USERNAME: "<<u1.username<<"\n";
    cout<<"PASSWORD: "<<u1.getPassword()<<"\n";
    return 0;
}