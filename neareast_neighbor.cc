#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(int argc,char** argv)
{
  MatrixXf m(2,4);
  VectorXf v(2);
  m << 1,23,6,9,
       3,11,7,2;
  v << 2,
       3;
  cout << "m is :\n" << m << endl;
  cout << "v is :\n" << v << endl;

  int idx=0;
  (m.colwise() - v).colwise().squaredNorm().minCoeff(&idx);
  cout << "Nearest neighbor is column \n" << idx << endl;
  cout << m.col(idx) << endl;
  return 0;
}
