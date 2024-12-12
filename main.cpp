#include <iostream>
#include "json.h"
using namespace json;
int main() {
 /*    Json v1;
     Json v2 = true;
     Json v3 = 123;
     Json v4 = 1.23;
     Json v5 = "hello world";

     bool b = v2;
     int i = v3;
     double f = v4;
     const std::string &s = v5;

     std::cout << "b: "<< b << std::endl;
     std::cout << "i: " << i << std::endl;
     std::cout << "f: " << f << std::endl;
     std::cout << "s: " << s << std::endl;*/
     
    Json arr; 
    arr[0] = true;  
    arr[1] = 123;   
    arr.append(1.23);
    arr.append("hello world"); 

    std::cout << arr.has(0) << std::endl;
    std::cout << arr.has(4) << std::endl;

    //bool b = arr[0]; 
    //int i = arr[1];   
    //double f = arr[2];
    //const std::string s = arr[3]; 

    //std::cout << "b: " << b << std::endl;
    //std::cout << "i: " << i << std::endl;
    //std::cout << "f: " << f << std::endl;
    //std::cout << "s: " << s << std::endl;

    //std::cout << arr.str() << std::endl;

  /*  Json obj;
    obj["bool"] = true;
    obj["int"] = 123;
    obj["double"] = 1.23;
    obj["str"] = "hello world";
    std::cout << obj.str() << std::endl;*/


    return 0;
}