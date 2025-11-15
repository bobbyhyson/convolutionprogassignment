#include "convstuff.h"

std::vector<double> conv(const std::vector<double>& f1,
                         const std::vector<double>& f2)
{
    int n = f1.size();
    int m = f2.size();
    int y = n + m - 1;

    std::vector<double> result(y, 0.0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i + j] += f1[i] * f2[j];
        }
    }

    return result;
}

