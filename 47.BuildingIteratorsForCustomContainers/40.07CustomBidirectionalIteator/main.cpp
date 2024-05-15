#include "boxcontainer.h"
#include <algorithm>
#include <vector>


int main()
{

  BoxContainer<int> box1;
  box1.add(5);
  box1.add(1);
  box1.add(4);
  box1.add(8);
  box1.add(5);
  box1.add(3);
  box1.add(7);
  box1.add(9);
  box1.add(6);

  /*
  fmt::println( "box1 : {}" , box1 );
  std::ranges::reverse(box1);
  fmt::println( "box1 : {}" , box1 );
  */

  fmt::print("box1-reverse : ");
  for (auto it = box1.end(); it != box1.begin();) { fmt::print("{} ", *(--it)); }
  fmt::println("");

  return 0;
}