#include <MultMatrix.hh>

/////////////////////////////////////////////////////////////////////////////////
//  Identificación del alumno
//
//  Nombre Completo: Ana Poulette Nicole Muñoz Fuentes
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//   Description:
//           -->Completar la descripción
//
/////////////////////////////////////////////////////////////////////////////////



void MultMatrix::DOijk(const Matrix<float>& A,const Matrix<float>& B, Matrix<float>& C)
{
	for(size_t i=0; i < A.rows(); i++){
		for(size_t j=0; j < B.cols(); j++){
			float valor = 0;
			for(size_t k=0; k < A.cols(); k++){
				valor = valor + A.value(i,k) * B.value(k,j);
				C.value(i,j,valor);
			}
		}
	}
}


void MultMatrix::DOkij(const Matrix<float>& A,const Matrix<float>& B, Matrix<float>& C)
{
	for(size_t k=0; k < A.cols(); k++){
		for(size_t i=0; i< A.rows(); i++){
			float r = A.value(i,k);
			//float valor =0;
			for(size_t j=0; j< B.cols(); j++){
				//float valor = valor + r * B.value(k,j);
				C.value(i,j,r*B.value(k,j)+ C.value(i,j));
			}
		}
	}
}

