#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
//#include <cstddef>

struct userData{

std::string password;
std::string userName; 
std::string pass_verify;
std::string user_verify; 


};



bool isLoggedin(userData* user1){

std::ifstream read(user1->userName + ".txt", std::ios::in);

    std::string confirm = user1->userName + user1->password;

        auto ss = std::ostringstream{};

    std::cout<<"Enter user name :"<<'\n';
    std::cin>>user1->userName;

    std::cout<<"Enter password : "<<'\n';
    std::cin>>user1->password;

       ss <<read.rdbuf();

     
     if ( ss.str() == confirm)
    {
        return true;   //that the user is valid and can log in
    }
    else
    {
        return false;
    }
}

//User login system
int main(){

    userData *user1 = new userData;


     int decide;

     while(decide != 3){
     std::cout<<"Press 1 to register: "<<'\n';
     std::cout<<"Press 2 to login: "<<'\n';
     std::cout<<"Press 3 to exit: "<<'\n';
     std::cin>>decide;



     if(decide == 1){

        std::cout << "select a username :";
        std::cin >> user1->userName;
        std::cout << "select a password :";
        std::cin >> user1->password;

        std::ofstream memory;
        memory.open( user1->userName + ".txt", std::ios::out);

        //memory<<"User name :"<<'\n';
        memory<<user1->userName<<'\n';
        //memory<<"Password :"<<'\n';
        memory<<user1->password<<'\n';
        memory.close();

     }
    
    if(decide == 2){

        bool status = isLoggedin(user1);
        if(!status){


            std::cout<<"Invalid credentials"<<'\n';
            //system("pause");
            //return 0;

        } else {

            std::cout<<"Successfully Logged in"<<'\n';
            //system("pause");
            return 1;
        }

    }
}
    

return 0;
}