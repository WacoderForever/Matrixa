#ifndef MATRIX_H
#define MATRIX_H

#include <stddef.h>
#include <stdbool.h>

typedef struct{
    double **data;
    size_t rows;
    size_t cols;
}Matrix;

// matrix creation and destruction
Matrix *create_matrix(size_t rows,size_t cols);
void free(Matrix *A);

// Operations
Matrix *add_matrices(const Matrix *A,const Matrix *B);
Matrix *subtract_matrices(const Matrix *A,const Matrix *B);
Matrix *multiply_matrix(Matrix *A,double scalar);
Matrix *multiply_matrices(const Matrix *A,const Matrix *B);
Matrix *matrix_transpose(const Matix *A);
double matrix_determinant(const Matrix *A);
Matrix *inverse_matrix(const Matrix *A);

// Utilities
void print_matrix(const Matrix *A);
bool is_equal(const Matrix *A,const Matrix *B);

#endif