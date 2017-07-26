
//#include <iostream>
#include <Eigen/Eigenvalues>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;
MatrixXd eigVals;
MatrixXd eigVecs;
void eig(MatrixXd A)
{
    EigenSolver<MatrixXd> es(A);
//    cout<<endl<<endl<<endl<<es.eigenvalues()<<endl<<endl;
    eigVals= es.eigenvalues().real();
    eigVecs= es.eigenvectors().real();
}

MatrixXd getEigVecs()
{
    return(eigVecs);
}

MatrixXd getEigVals()
{
    return(eigVals);
}
