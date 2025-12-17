#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 0;
    double s = 0, k = 0;
    cout << "Введите число точек на траектории:" << endl;
    cin >> n;
    cout << "Введите площадь крыла самолета S:" << endl;
    cin >> s;
    cout << "Введите коэффициент подъемной силы k:" << endl;
    cin >> k;

    double* v = new double[n];
    double* p = new double[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите значение скорости V в точке под номером " << i + 1 << endl;
        cin >> v[i];
        cout << "Введите значение плотности воздуха р в точке под номером " << i + 1 << endl;
        cin >> p[i];
    }

    cout << fixed << setprecision(2) << endl;
    cout << "Таблица траектории движения:" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "| Шаг | Скорость | Плотность | Подъемная сила |" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        double L = 0.5 * p[i] * pow(v[i], 2) * s * k;
        cout << "|" << setw(5) << i + 1 << "|" << setw(10) << v[i] << "|" << setw(11) << p[i] << "|" << setw(16) << L << "|" << endl;
        cout << "-----------------------------------------------" << endl;
    }
    
    delete[] v, p;
    return 0;
}