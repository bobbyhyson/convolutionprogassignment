#include <iostream>
#include <vector>

std::vector<double> convolution(const std::vector<double>& f1, const std::vector<double>& f2){
int n = f1.size();
int m = f2.size();
int y = n + m - 1;
std::vector<double> result(y, 0.0);

for (int i = 0; i < n; i++){
	for ( int j = 0; j < m; j++){
		result[i+j] += f1[i] * f2[j];
		}
	}
return result;
}

int main(void) {

	std::vector<double> f1 = {0, 1, 2, 3, 2, 1};
//len1 = 6;
	std::vector<double> f2= {-2, -2, -2, -2, -2, -2, -2};
//len2 = 7;
	std::vector<double> f3 = {1, -1, 1, -1};
//len3 = 4;
	std::vector<double> f4 = {0, 0, 0, -3, -3};
//len4 = 5;

std::vector<double> convresult = convolution(f1, f2);
std::cout << "Convolution of f1 and f2: " << std::endl;
for (double printvalue : convresult){
	std::cout << printvalue << " " << std::endl;
}

//leny = conv(double *f1, int len1, double *f2, int len2, double *y1);
//leny2 = conv(double *f1, int len3, double *f2, int len3, double *y2);

    return 0;
}
