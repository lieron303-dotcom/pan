#include <iostream>
using namespace std;

double ac(double l, double m) {
    double g = 9.81;
    return (l - m * g) / m;
}
int main()
{
    double m = 0, l = 0, h = 0;
    cout << "Введите значение высоты H:" << endl;
    cin >> h;
    if (h < 0) {
        cout << "Высота меньше 0, введите корректные данные!";
        return 1;
    }
    cout << "Введите значение массы самолета m:" << endl;
    cin >> m;
    if (m <= 0) {
        cout << "Введите корректные данные!";
        return 1;
    }
    cout << "Введите значение подъемной силы L:" << endl;
    cin >> l;
    double a = ac(l, m);
    if (a < 0) {
        cout << "Ускорение меньше 0, введите корректные данные!";
        return 1;
    }
    cout << "Время, необходимое для набора заданной высоты равняется: " << sqrt(2 * h / a) << endl;
    return 0;
}