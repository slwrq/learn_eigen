#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc,char** argv)
{
  const int size = 6;
  MatrixXd m1(size,size);
  m1.topLeftCorner(size/2,size/2) = MatrixXd::Zero(size/2,size/2);
  m1.topRightCorner(size/2,size/2) = MatrixXd::Identity(size/2,size/2);
  m1.bottomLeftCorner(size/2,size/2) = MatrixXd::Identity(size/2,size/2);
  m1.bottomRightCorner(size/2,size/2) = MatrixXd::Zero(size/2,size/2);
  cout << "m1 is :\n" << m1 << endl;

  return 0;
}
