#ifndef __MATRIX__H
#define __MATRIX__H

#include <iostream>
#include <stdlib.h>
#include <vector>

#define LOG(x) cout << x << endl


using std::endl;
using std::cout;
using std::vector;

template<class dtype>
class Matrix2d{

    private:
        vector<vector<dtype>> matrix;
        int row;
        int col;
    
    public:
        
        // this is used to initialize the matrix with zeros  
        Matrix2d(int row,int col); // created

        // this is used to zero the matrix  
        void MakeZeros(Matrix2d<dtype>& var);   

        // this is used to get random matrix
        Matrix2d<dtype> randomMatrix(int row,int col); // created

        // operators +,-,*,/
        void operator +(Matrix2d<dtype>& var); // created
        void operator -(Matrix2d<dtype>& var); // created
        void operator *(Matrix2d<dtype>& var); // created
        void operator /(Matrix2d<dtype>& var); // created

        void operator +=(Matrix2d<dtype>& var); // created
        void operator -=(Matrix2d<dtype>& var); // created
        void operator *=(Matrix2d<dtype>& var); // created
        void operator /=(Matrix2d<dtype>& var); // created

        template<class dtypes>
        friend Matrix2d<dtypes> operator+(Matrix2d<dtypes>& var1,Matrix2d<dtypes>& var2);
        
        template<class dtypes>
        friend Matrix2d<dtypes> operator-(Matrix2d<dtypes>& var1,Matrix2d<dtypes>& var2);
        
        template<class dtypes>
        friend Matrix2d<dtypes> operator*(Matrix2d<dtypes>& var1,Matrix2d<dtype>& var2);
        
        template<class dtypes>
        friend Matrix2d<dtypes> operator/(Matrix2d<dtypes>& var1,Matrix2d<dtypes>& var2);
        

        // shows the matrix  
        void print(void); // created

};

#endif //__MATRIX__H


// https://stackoverflow.com/questions/115703/storing-c-template-function-definitions-in-a-cpp-file