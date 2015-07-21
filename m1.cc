#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
int main()
{
  MatrixXd m(3,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(2,0) = 0.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  m(2,1) = m(2,0) + m(1,1);
  std::cout << "Here is the matrix m:\n" << m << std::endl;
  std::cout << "Here is the matrix m's cols:\n" << m.cols() << std::endl;
  std::cout << "Here is the matrix m's rows:\n" << m.rows() << std::endl;
  VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  std::cout << "Here is the vector v:\n" << v << std::endl;
}

