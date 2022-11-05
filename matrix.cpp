//
// Created by Рустем Хуснутдинов on 22.10.2022.
//

#include "matrix.h"

#include <iostream>
#include <fstream>

namespace maths {
    Matrix::Matrix(int n, int m) {
        m_values.resize(n, std::vector<int>(m));
    }

    Matrix Matrix::read_file(const std::string &file_name) {
        std::ifstream in(file_name);
        if(!in.is_open())
            throw;
        /* TODO: Найти способ прочитать файлик, не имея размерностей,
        ** за минимальное число проходов
         * */
        int N, M;
        in >> N >> M;
        Matrix obj(N, M);
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                in >> obj.m_values[i][j];
            }
        }
        return obj;
    }

    void Matrix::print() {
        // TODO: Воспользоваться средствами std
        for(const auto & row : m_values) {
            for(const auto & val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
} // maths