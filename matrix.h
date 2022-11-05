//
// Created by Рустем Хуснутдинов on 22.10.2022.
//
#include <vector>

#ifndef MATHS_MATRIX_H
#define MATHS_MATRIX_H

namespace maths {
    class Matrix {
    private:
        std::vector<std::vector<int>> m_values;

    // TODO: Переопределить оператор *, +
    protected:
        Matrix mult(const Matrix &);
        Matrix mult(const int &);
        Matrix sum(const Matrix &);

    public:
        Matrix() = default;
        Matrix(int n, int m);

        void print();

    public:
        static Matrix read_file(const std::string & file_name);
    };

} // maths

#endif //MATHS_MATRIX_H
