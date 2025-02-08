// چاپ ماتریس
void chap_matrix(int matrix[10][10], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int radif, soton, add;

    cout << "Enter the number of radif and soton: ";
    cin >> radif >> soton;

    cout << "Enter the add meghdar: ";
    cin >> add;

    cout << "Enter the abads of the matrix:" << endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> matrix[i][j];
        }
    }

    addMultiply(matrix, radif, soton, add);

    cout << "The resulting matrix is:" << endl;
    chap_matrix(matrix, radif, soton);

    return 0;
}



#include <iostream>

using namespace std;

// جستوجویه درایه
bool searchabad(int matrix[10][10], int radif, int soton, int abad) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            if (matrix[i][j] == abad) {
                return true;
            }
        }
    }
    return false;
}

void matrisvorodi(int matrix[10][10], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> matrix[i][j];
        }
    }
}

void chap_matrix(int matrix[10][10], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int radif, soton, abad;

    cout << "Enter the number of radif and soton: ";
    cin >> radif >> soton;

    cout << "Enter the abads of the matrix:" << endl;
    matrisvorodi(matrix, radif, soton);

    cout << "Enter the abad to search for: ";
    cin >> abad;

    if (searchabad(matrix, radif, soton, abad)) {
        cout << "abad found in the matrix." << endl;
    } else {
        cout << "abad not found in the matrix." << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

const int maxs = 10;

// ویرایش یک درایه
void editabad(int matrix[maxs][maxs], int rad, int sot, int newmeghdar) {
    matrix[rad][sot] = newmeghdar;
}

// نمایش ماتریس
void displayMatrix(int matrix[maxs][maxs], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[maxs][maxs];
    int size, rad, sot, newmeghdar;

    // گرفتن اندازه ماتریس از کاربر
    cout << "Enter the size of the matrix (max " << maxs << "): ";
    cin >> size;

    // گرفتن مقادیر ارایه ماتریس
    cout << "Enter the abads of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // نمایش ماتریس اول
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix, size);

    // گرفتن مختصات و مقدار جدید از کاربر
    cout << "Enter the rad and sotumn to edit: ";
    cin >> rad >> sot;
    cout << "Enter the new meghdar: ";
    cin >> newmeghdar;

    // تغییر ردایه هدف
    editabad(matrix, rad, sot, newmeghdar);

    // چاپ ماتریس جدید
    cout << "matrisjadid:" << endl;
    displayMatrix(matrix, size);

    return 0;
}




#include <iostream>
using namespace std;

const int maxs = 10;

// جمع درایه های سطر ها جدا جدا
void sumradif(int matrix[maxs][maxs], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        int sum = 0;
        for (int j = 0; j < soton; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of rad " << i << ": " << sum << endl;
    }
}
// تابع نمایش ماتریس
void displayMatrix(int matrix[maxs][maxs], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[maxs][maxs];
    int radif, soton;

    // گرفتن تعداد ردیف‌ها و ستون‌ها از کاربر
    cout << "Enter the number of radif (max " << maxs << "): ";
    cin >> radif;
    cout << "Enter the number of soton (max " << maxs << "): ";
    cin >> soton;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the abads of the matrix:" << endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> matrix[i][j];
        }
    }

    // نمایش ماتریس اولیه
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix, radif, soton);

    // نمایش جمع عناصر هر سطر
    cout << "Sum of each rad:" << endl;
    sumradif(matrix, radif, soton);

    return 0;
}



#include <iostream>
using namespace std;

const int maxs = 10;

// تابع جمع عناصر ستون‌ها به تفکیک
void sumsoton(int matrix[maxs][maxs], int radif, int soton) {
    for (int j = 0; j < soton; j++) {
        int sum = 0;
        for (int i = 0; i < radif; i++) {
            sum += matrix[i][j];
        }
        cout << "Sum of sotumn " << j << ": " << sum << endl;
    }
}

// تابع نمایش ماتریس
void displayMatrix(int matrix[maxs][maxs], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[maxs][maxs];




#include <iostream>
using namespace std;

const int maxs = 10;

// تابع جمع عناصر روی قطر اصلی
int sumMainDiagonal(int matrix[maxs][maxs], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int matrix[maxs][maxs];
    int size;

    // گرفتن اندازه ماتریس از کاربر
    cout << "Enter the size of the matrix (max " << maxs << "): ";
    cin >> size;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the abads of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // محاسبه و نمایش جمع عناصر روی قطر اصلی
    int sum = sumMainDiagonal(matrix, size);
    cout << "Sum of the main diagonal: " << sum << endl;

    return 0;
}



#include <iostream>
using namespace std;

const int maxs = 10;

// تابع مشخص کردن تعداد درایه‌های صفر ماتریس
int countZeros(int matrix[maxs][maxs], int radif, int soton) {
    int count = 0;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}

// تابع نمایش ماتریس
void displayMatrix(int matrix[maxs][maxs], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[maxs][maxs];
    int radif, soton;

    // گرفتن تعداد ردیف‌ها و ستون‌ها از کاربر
    cout << "Enter the number of radif (max " << maxs << "): ";
    cin >> radif;
    cout << "Enter the number of soton (max " << maxs << "): ";
    cin >> soton;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the abads of the matrix:" << endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> matrix[i][j];
        }
    }

    // نمایش ماتریس اولیه
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix, radif, soton);

    // محاسبه و نمایش تعداد درایه‌های صفر
    int zeros = countZeros(matrix, radif, soton);
    cout << "Number of zero abads: " << zeros << endl;

    return 0;
}



#include <iostream>
using namespace std;

const int maxs = 10;
#include <iostream>

using namespace std;

// دریافت ابعاد  و خود ماتریس
void matrisvorodi(int matrix[10][10], int radif, int soton) {
    cout << "Enter the abads of the matrix " << radif << "x" << soton <<endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> matrix[i][j];
        }
    }
}

// چاپ ماتریس
void chap_matrix(int matrix[10][10], int radif, int soton) {
    cout << "The matrix is: " <<endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int radif, soton;

    cout << "Enter the number of radif: ";
    cin >> radif;
    cout << "Enter the number of soton: ";
    cin >> soton;

    matrisvorodi(matrix, radif, soton);
    chap_matrix(matrix, radif, soton);

    return 0;
}



#include <iostream>

using namespace std;

// تابع ضرب دو ماتریس
void zarbmatrix(int A[10][10], int B[10][10], int result[10][10], int radifA, int sotonA, int sotonB) {
    for (int i = 0; i < radifA; i++) {
        for (int j = 0; j < sotonB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < sotonA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// تابع دریافت ماتریس
void matrisvorodi(int matrix[10][10], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> matrix[i][j];
        }
    }
}

// تابع چاپ ماتریس
void chap_matrix(int matrix[10][10], int radif, int soton) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int radifA, sotonA, radifB, sotonB;

    cout << "Enter the number of radif and soton for matrix A: ";
    cin >> radifA >> sotonA;

    cout << "Enter the number of radif and soton for matrix B: ";
    cin >> radifB >> sotonB;

    if (sotonA != radifB) {
        cout << "Matrix multiplication not possible! Number of soton of matrix A must be equal to number of radif of matrix B." << endl;
        return 0;
    }

    cout << "Enter the abads of matrix A:" << endl;
    matrisvorodi(A, radifA, sotonA);

    cout << "Enter the abads of matrix B:" << endl;
    matrisvorodi(B, radifB, sotonB);

    zarbmatrix(A, B, result, radifA, sotonA, sotonB);

    cout << "The resulting matrix is:" << endl;
    chap_matrix(result, radifA, sotonB);

    return 0;
}



#include <iostream>
// جمع ماتریس
using namespace std;

void plusmatrix(int A[10][10], int B[10][10], int result[10][10], int rad, int soton) {
    for (int i = 0; i < rad; i++) {
        for (int j = 0; j < soton; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int radif, soton;

    cout << "Enter the number of radif and soton: ";
    cin >> radif >> soton;

    cout << "Enter the abads of matrix A:" << endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the abads of matrix B:" << endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cin >> B[i][j];
        }
    }

    plusmatrix(A, B, result, radif, soton);

    cout << "The resulting matrix is:" << endl;
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>

using namespace std;

// تابع ضرب یک عدد در ماتریس
void addMultiply(int matrix[10][10], int radif, int soton, int add) {
    for (int i = 0; i < radif; i++) {
        for (int j = 0; j < soton; j++) {
            matrix[i][j] =matrix[i][j] * add ;
        }
    }
}
// تابع بررسی ماتریس بالا مثلثی
bool isUpperTriangular(int matrix[maxs][maxs], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

// تابع بررسی ماتریس پایین مثلثی
bool isLowerTriangular(int matrix[maxs][maxs], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[maxs][maxs];
    int size;

    // گرفتن اندازه ماتریس از کاربر
    cout << "Enter the size of the matrix (max " << maxs << "): ";
    cin >> size;

    // گرفتن مقادیر ماتریس از کاربر
    cout << "Enter the abads of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // بررسی و نمایش نوع ماتریس
    if (isUpperTriangular(matrix, size)) {
        cout << "The matrix is upper triangular." << endl;
    } else if (isLowerTriangular(matrix, size)) {
        cout << "The matrix is lower triangular." << endl;
    } else {
        cout << "The matrix is neither upper nor lower triangular." << endl;
    }

    return 0;
}
