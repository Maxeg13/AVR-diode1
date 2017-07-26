#ifndef EIGEN_H
#define EIGEN_H
#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include "eig.h"
using namespace Eigen;
using namespace std;


class PCA
{
public:

    int ind;
    int size,width;

    void algorythm()
    {
        eig(cor);
        eigvals=getEigVals();
        eigvecs=getEigVecs();
        cout<<endl<<"eigvecs:"<<endl<<eigvecs<<endl;
        cout<<endl<<"eigenvals"<<endl<<eigvals<<endl;
    }

    void sort()
    {
//        MatrixXd mo=MatrixXd::Random(width,width);
        //        MatrixXd v=MatrixXd::Random(width,1)+MatrixXd::Constant(width,1,1);
        //        v=v.abs();
        //        cout<<v<<endl;
        eigvecs_s=eigvecs;
        int* a=new int[width];
        for(int i=0;i<width;i++)
        {
            int j=0;int k=0;
            eigvals.maxCoeff(&j,&k);
            eigvals(j)=0;
            a[i]=j;
            cout<<a[i]<<" ";

            eigvecs_s.col(i)=eigvecs.col(j);

        }
//        cout<<endl<<m<<endl<<endl;
//        cout<<endl<<mo;
        cout<<endl<<"eigvecs after:"<<endl<<eigvecs_s<<endl;
        delete a;
    }

    void getCor()
    {
        cor=buf_c.transpose()*buf_c;
        cout<<"correlation matr:"<<endl<< cor;
    }
    void updateBuf(std::vector<float> x)
    {
        for(int i=0;i<width;i++)
            buf(ind,i)=x[i];

        ind++;
        if(ind==size) ind=0;
    }

    PCA(int x,int y)
    {
        //        buf=MatrixXd::Zero(x,y);
        buf=MatrixXd::Random(30,4);
        size=x;
        width=y;
        //        cout<<buf;
    }


    void centr()
    {
        MatrixXd v=MatrixXd::Ones(buf.rows(),1);
        buf_c=buf;
        for(int i=0;i<buf.cols();i++)
        {
            buf_c.col(i)-=buf.col(i).mean()*v;
        }
    }

private:
    MatrixXd buf,buf_c;
    MatrixXd cor;
    MatrixXd eigvecs, eigvecs_s;
    MatrixXd eigvals;

};


#endif // EIGEN_H
