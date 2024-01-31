// matrix.h

#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

class Matrix {
public:
    static std::vector<std::vector<double>> naive_multiply(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b);

private:
};

#endif 