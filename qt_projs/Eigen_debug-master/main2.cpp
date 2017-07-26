#include <iostream>
#include <vector>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;
//typedef std::complex<double> cd;
#include "eig.h"

//#include "preeig.h"
int main(void)
{
//PCA myPCA(20,4);
//myPCA.centr();
//myPCA.getCor();
MatrixXd MH = MatrixXd::Random(4,4);
eig(MH.transpose()*MH);
cout<<getEigVals()<<endl<<endl;
cout<<getEigVecs()<<endl<<endl;

//    MatrixXd MH = MatrixXd::Zero(8,3);
//    MatrixXd M=MH.transpose()*MH;
//    cout  << endl << MH << endl << endl;
//    cout  << endl << norm(MH) << endl << endl;
//     cout  << endl << norm(MH).mean();
// cout << endl <<  (M.middleCols<1>(1).max())<< endl << endl;
//eig();


//    Matrix3f m = Matrix3f::Random();
//    int i,j;
//     float minOfM = m.middleCols<1>(1).maxCoeff(&i,&j);
//     cout << "Here is the matrix m:\n" << m << endl;
//     cout << "Its minimum coefficient (" << minOfM
//          << ") is at position (" << i << "," << j << ")\n\n";


}
