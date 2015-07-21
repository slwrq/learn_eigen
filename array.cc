#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc,char** argv)
{
  MatrixXf m(2,2),n(2,2),result(2,2);
  m << 1,2,
       3,4;
  n << 5,6,
       7,8;
  result = m*n;
  cout << "result =Matrix m*n:\n" << result << endl;
  result =m.array()*n.array();
  cout << "arrary m*n :\n" << result << endl;
  result = m.array() + 4;
  cout << "Array m+4：\n" << result << endl;
}
