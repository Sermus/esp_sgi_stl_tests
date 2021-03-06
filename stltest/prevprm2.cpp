#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iterator>
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
#include "iota.h"

#ifdef MAIN 
#define prevprm2_test main
#endif
#endif
int prevprm2_test(int, char**)
{
  std::cout<<"Results of prevprm2_test:"<<std::endl;
  std::vector <int> v1(3);
  std::iota(v1.begin(), v1.end(), 0);
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  for(int i = 0; i < 9; i++)
  {
    std::prev_permutation(v1.begin(), v1.end(), std::greater<int>());
    std::copy(v1.begin(), v1.end(), iter);
    std::cout << std::endl;
  }
  return 0;
}
