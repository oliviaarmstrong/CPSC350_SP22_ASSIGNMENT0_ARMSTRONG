#include "HelloWorld.h"

HelloWorld::HelloWorld(){}

HelloWorld::~HelloWorld(){
  cout << "Bye!" << endl;
};

string HelloWorld::printHelloWorld(){
  return "HelloWorld!";
}
