#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc,char** argv)
{
  ArrayXXf a(2,2);
  a << 1,2,
       3,4;
  cout << "(a > 0).all() is :\n" << (a > 0).all() << endl;
  cout << "(a > 0).andy() is :\n" << (a > 0).any() << endl;
  cout << "(a > 0).count() is :\n" << (a > 0).count() << endl;
  cout << "(a > 2).all() is :\n" << (a > 2).all() << endl;
  cout << "(a > 2).andy() is :\n" << (a > 2).any() << endl;
  cout << "(a > 2).count() is :\n" << (a > 2).count() << endl;
  return 0;
}
