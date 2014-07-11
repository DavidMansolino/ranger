#include "Ranger.hpp"

#include <stdio.h>

using namespace webots;

int main(int argc, char *argv[])
{
  Ranger* controller = new Ranger();
  
  controller->run();
  
  delete controller;
  return 0;
}
