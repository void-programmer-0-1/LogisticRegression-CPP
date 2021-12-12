
#include "matrix.h"

template<class dtype>
Matrix2d<dtype>::Matrix2d(int row,int col){

    if(row == 0 && col == 0){
        cout << "Both the row and col are zero" << endl;
    }

    else if(row == 0 || col == 0){
        const char* zeroed = row == 0 ? "row is invalid" : "col is invalid";
        cout << zeroed << endl;
    }

    else{

        this->row = row;
        this->col = col;
        
        vector<dtype> temp;

        for(int i=0;i<this->col;i++){
            temp.push_back(i + 1);
        }

        for(int i=0;i<this->row;i++){
            this->matrix.push_back(temp);
        }

        temp.clear();
    }

}

template<class dtype>
void Matrix2d<dtype>::print(void){
    
    cout << "[";
    for(int i=0;i<this->row;i++){        
        cout << "[";
        for(int j=0;j<this->col;j++){
            if(j == this->col - 1)
                cout << this->matrix[i][j]  << "";
            else
                cout << this->matrix[i][j]  << ",";
        }
        if(i == this->row - 1)
            cout << "]";
        else
            cout << "]" << endl;
    }
    cout << "]" << endl;
    cout << endl;
}

template<class dtype>
void Matrix2d<dtype>::MakeZeros(Matrix2d<dtype>& var){
    
    for(int i=0;i<this->row;i++){
        for(int j=0;j<this->col;j++){
            this->matrix[i][j] = 0;
        }
    }

}

template<class dtype>
void Matrix2d<dtype>::operator +(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] += var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}

template<class dtype>
void Matrix2d<dtype>::operator +=(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] += var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}


template<class dtype>
void Matrix2d<dtype>::operator -(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] -= var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}

template<class dtype>
void Matrix2d<dtype>::operator -=(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] -= var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}

template<class dtype>
void Matrix2d<dtype>::operator *(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] *= var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}

template<class dtype>
void Matrix2d<dtype>::operator *=(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] *= var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}

template<class dtype>
void Matrix2d<dtype>::operator /(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] /= var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}

template<class dtype>
void Matrix2d<dtype>::operator /=(Matrix2d<dtype>& var){

    if((var.row == this->row) && (var.col == this->col)){

        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                this->matrix[i][j] /= var.matrix[i][j];
            }
        }
    }   

    else{
        cout << "Error in the dimensions" << endl;
    }
}


template<class dtype>
Matrix2d<dtype> operator+(Matrix2d<dtype>& var1,Matrix2d<dtype>& var2){

    Matrix2d<dtype> var3(var1.row,var1.col);

    if(var1.row != var2.row){
        cout << "Ivalid shape check the rows" << endl;
        exit(1);
    } 
    else if(var1.col != var2.col){
        cout << "Ivalid shape check the cols" << endl;
        exit(1);
    }
    else{

        for(int i=0;i<var3.row;i++){
            for(int j=0;j<var3.col;j++){
                var3.matrix[i][j] = var1.matrix[i][j] + var2.matrix[i][j];
            }
        }
    }

    return var3;

}


template<class dtype>
Matrix2d<dtype> operator-(Matrix2d<dtype>& var1,Matrix2d<dtype>& var2){

    Matrix2d<dtype> var3(var1.row,var1.col);
    
    if(var1.row != var2.row){
        cout << "Ivalid shape check the rows" << endl;
        exit(1);
    } 
    else if(var1.col != var2.col){
        cout << "Ivalid shape check the cols" << endl;
        exit(1);
    }
    else{

        for(int i=0;i<var3.row;i++){
            for(int j=0;j<var3.col;j++){
                var3.matrix[i][j] = var1.matrix[i][j] - var2.matrix[i][j];
            }
        }
    }

    return var3;

}

template<class dtype>
Matrix2d<dtype> operator*(Matrix2d<dtype>& var1,Matrix2d<dtype>& var2){

    Matrix2d<dtype> var3(var1.row,var1.col);

    if(var1.row != var2.row){
        cout << "Ivalid shape check the rows" << endl;
        exit(1);
    } 
    else if(var1.col != var2.col){
        cout << "Ivalid shape check the cols" << endl;
        exit(1);
    }
    else{

        for(int i=0;i<var3.row;i++){
            for(int j=0;j<var3.col;j++){
                var3.matrix[i][j] = var1.matrix[i][j] * var2.matrix[i][j];
            }
        }
    }

    return var3;

}

template<class dtype>
Matrix2d<dtype> operator/(Matrix2d<dtype>& var1,Matrix2d<dtype>& var2){

    Matrix2d<dtype> var3(var1.row,var1.col);

    if(var1.row != var2.row){
        cout << "Ivalid shape check the rows" << endl;
        exit(1);
    } 
    else if(var1.col != var2.col){
        cout << "Ivalid shape check the cols" << endl;
        exit(1);
    }
    else{

        for(int i=0;i<var3.row;i++){
            for(int j=0;j<var3.col;j++){
                var3.matrix[i][j] = var1.matrix[i][j] / var2.matrix[i][j];
            }
        }
    }

    return var3;

}
