#include "matrix.h"


std::vector<std::vector<double>> naive_multiply(const std::vector<std::vector<double>> &a, const std::vector<std::vector<double>> &b) {
    if (a.size() == 0 || b.size() == 0 || a[0].size() != b.size())
        return std::vector<std::vector<double>>();

    int N = a.size();
    int M = b[0].size();
    int K = b.size();

    std::vector<std::vector<double>> out(a.size(), std::vector<double>(b[0].size()));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            for (int k = 0; k < K; k++)
                out[i][j] += a[i][k] * b[k][j];

    return out;
}