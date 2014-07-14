#include "Ranger.hpp"

#include <stdio.h>

using namespace ranger;

int main(int argc, char *argv[])
{
  Ranger* controller = new Ranger();
  
  controller->run();
  
  delete controller;
  return 0;
}
