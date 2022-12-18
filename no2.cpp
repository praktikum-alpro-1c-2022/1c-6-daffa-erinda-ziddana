#include <iostream>

using namespace std;


float konversi (float c, float f){     //function float
    return (c = (f - 32.0) * 5/9);
}
double konversi (double c, double f){  //function double
    return (c = (f - 32.0) * 5/9);
}
int konversi (int c, int f){           //function int
    return (c = (f - 32.0) * 5/9);
}
int main(){
    //judul
    cout << "---PROGRAM KONVERSI SUHU---" << endl;
    cout << endl;

    //Ouput float
    float c, f;

    cout << "Masukan suhu (Fahrenheit): ";
    cin >> f;
    cout << "Hasil: " << konversi(c, f) << " C"<< endl;

    //Output double
    double c1, f1;

    cout << "Masukan suhu (Fahrenheit): ";
    cin >> f1;
    cout << "Hasil: " << konversi(c1, f1) << " C"<< endl;

    //Output int
    int c3, f3;

    cout << "Masukan suhu (Fahrenheit): ";
    cin >> f3;
    cout << "Hasil: " << konversi(c3, f3) << " C" << endl;

    return 0;
}
