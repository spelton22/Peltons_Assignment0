#include "assignment0.h"


int main(){

  HelloWorld *hw = new HelloWorld(); //HEAP

  //cout << hw->printHelloWorld() << endl;
    //need pointer for new hw

  hw->printHelloWorld();

  delete hw;
    //frees up memory -- deletes hw from the heap

  return 0;

}
