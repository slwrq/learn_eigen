#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc,char** argv)
{
  VectorXf v(2);
  MatrixXf m(2,2);
  v << -1,
        2;
  m << 1,-2,
       -3,4;
  cout << "v.squaredNorm() is:\n" << v.squaredNorm() << endl;
  cout << "v.norm() is :\n" << v.norm() << endl;
  cout << "v.lpNorm<1>() is :\n" << v.lpNorm<1>() << endl;
  cout << "v.lpNorm<Infinity>() is :\n" << v.lpNorm<Infinity>() << endl;
  cout << endl;

  cout << "m.squaredNorm() is:\n" << m.squaredNorm() << endl;
  cout << "m.norm() is :\n" << m.norm() << endl;
  cout << "m.lpNorm<1>() is :\n" << m.lpNorm<1>() << endl;
  cout << "m.lpNorm<Infinity>() is :\n" << m.lpNorm<Infinity>() << endl;
  return 0;
}
