#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(int argc,char** argv)
{
  Array22f m;
  m << 1,2,
       3,4;
  Array44f a = Array44f::Constant(0.6);
  cout << "here is the array a：\n" << a << endl;
  cout << "here is the array m：\n" << m << endl;
  a.block<2,2>(1,1) = m;
  cout << "after first block change new a is :\n" << a << endl;
  a.block(0,0,2,3)=a.block(2,1,2,3);
  cout << "after second block change new a is :\n" << a << endl;
  return 0;
}
