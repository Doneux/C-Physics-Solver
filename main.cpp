#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    char restart = 'y';

    while (tolower(restart) == 'y') {
        cout << "Choose the equation you want to use:" << endl;
        cout << "1. Velocity (v = d/t)" << endl;
        cout << "2. Acceleration (a = v/t)" << endl;
        cout << "3. Centripetal Acceleration (ac = v^2/r)" << endl;
        cout << "4. Force (f = ma)" << endl;
        cout << "5. Normal Force (n = mg or n = mg*cos(o))" << endl;
        cout << "6. Spring Force (f = -kx)" << endl;

        int choice;
        cout << "Enter the number corresponding to your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Velocity Case
            char variable;
            cout << "Which variable do you want to solve for? (v, d, t): ";
            cin >> variable;

            if (variable == 'v') {
                double d, t;
                cout << "Enter displacement (d): ";
                cin >> d;
                cout << "Enter time (t): ";
                cin >> t;
                double v = d / t;
                cout << "Velocity (v) = " << v << endl;
            } else if (variable == 'd') {
                double v, t;
                cout << "Enter velocity (v): ";
                cin >> v;
                cout << "Enter time (t): ";
                cin >> t;
                double d = v * t;
                cout << "Displacement (d) = " << d << endl;
            } else if (variable == 't') {
                double v, d;
                cout << "Enter velocity (v): ";
                cin >> v;
                cout << "Enter displacement (d): ";
                cin >> d;
                double t = d / v;
                cout << "Time (t) = " << t << endl;
            }
        } else if (choice == 2) {
            // Acceleration Case
            char variable;
            cout << "Which variable do you want to solve for? (a, v, t): ";
            cin >> variable;

            if (variable == 'a') {
                double v, t;
                cout << "Enter velocity (v): ";
                cin >> v;
                cout << "Enter time (t): ";
                cin >> t;
                double a = v / t;
                cout << "Acceleration (a) = " << a << endl;
            } else if (variable == 'v') {
                double a, t;
                cout << "Enter acceleration (a): ";
                cin >> a;
                cout << "Enter time (t): ";
                cin >> t;
                double v = a * t;
                cout << "Velocity (v) = " << v << endl;
            } else if (variable == 't') {
                double v, a;
                cout << "Enter velocity (v): ";
                cin >> v;
                cout << "Enter acceleration (a): ";
                cin >> a;
                double t = v / a;
                cout << "Time (t) = " << t << endl;
            }
        } else if (choice == 3) {
            // Centripetal Acceleration Case
            char variable;
            cout << "Which variable do you want to solve for? (ac, v, r): ";
            cin >> variable;

            if (variable == 'ac') {
                double v, r;
                cout << "Enter velocity (v): ";
                cin >> v;
                cout << "Enter radius (r): ";
                cin >> r;
                double ac = v * v / r;
                cout << "Centripetal Acceleration (ac) = " << ac << endl;
            } else if (variable == 'v') {
                double ac, r;
                cout << "Enter centripetal acceleration (ac): ";
                cin >> ac;
                cout << "Enter radius (r): ";
                cin >> r;
                double v = sqrt(ac * r);
                cout << "Velocity (v) = " << v << endl;
            } else if (variable == 'r') {
                double ac, v;
                cout << "Enter centripetal acceleration (ac): ";
                cin >> ac;
                cout << "Enter velocity (v): ";
                cin >> v;
                double r = (v * v) / ac;
                cout << "Radius (r) = " << r << endl;
            }
        } else if (choice == 4) {
            // Force Case
            char variable;
            cout << "Which variable do you want to solve for? (f, m, a): ";
            cin >> variable;

            if (variable == 'f') {
                double m, a;
                cout << "Enter mass (m): ";
                cin >> m;
                cout << "Enter acceleration (a): ";
                cin >> a;
                double f = m * a;
                cout << "Force (f) = " << f << endl;
            } else if (variable == 'm') {
                double f, a;
                cout << "Enter force (f): ";
                cin >> f;
                cout << "Enter acceleration (a): ";
                cin >> a;
                double m = f / a;
                cout << "Mass (m) = " << m << endl;
            } else if (variable == 'a') {
                double f, m;
                cout << "Enter force (f): ";
                cin >> f;
                cout << "Enter mass (m): ";
                cin >> m;
                double a = f / m;
                cout << "Acceleration (a) = " << a << endl;
            }
        } else if (choice == 5) {
            // Normal Force Cases
            int sub_choice;
            cout << "Choose the normal force equation: 1 for n = mg, 2 for n = mg*cos(o): ";
            cin >> sub_choice;

            if (sub_choice == 1) {
                char variable;
                cout << "Which variable do you want to solve for? (n, m, g): ";
                cin >> variable;

                if (variable == 'n') {
                    double m;
                    const double g = 9.8;
                    cout << "Enter mass (m): ";
                    cin >> m;
                    double n = m * g;
                    cout << "Normal Force (n) = " << n << endl;
                } else if (variable == 'm') {
                    double n;
                    const double g = 9.8;
                    cout << "Enter normal force (n): ";
                    cin >> n;
                    double m = n / g;
                    cout << "Mass (m) = " << m << endl;
                }
            } else if (sub_choice == 2) {
                char variable;
                cout << "Which variable do you want to solve for? (n, m, o): ";
                cin >> variable;

                if (variable == 'n') {
                    double m, o;
                    const double g = 9.8;
                    cout << "Enter mass (m): ";
                    cin >> m;
                    cout << "Enter angle (o) in degrees: ";
                    cin >> o;
                    double n = m * g * cos(o * M_PI / 180);
                    cout << "Normal Force (n) = " << n << endl;
                } else if (variable == 'm') {
                    double n, o;
                    const double g = 9.8;
                    cout << "Enter normal force (n): ";
                    cin >> n;
                    cout << "Enter angle (o) in degrees: ";
                    cin >> o;
                    double m = n / (g * cos(o * M_PI / 180));
                    cout << "Mass (m) = " << m << endl;
                } else if (variable == 'o') {
                    double n, m;
                    const double g = 9.8;
                    cout << "Enter normal force (n): ";
                    cin >> n;
                    cout << "Enter mass (m): ";
                    cin >> m;
                    double cos_o = n / (m * g);
                    if (cos_o <= 1 && cos_o >= -1) {
                        double o = acos(cos_o) * 180 / M_PI;
                        cout << "Angle (o) in degrees = " << o << " (approximately)" << endl;
                    } else {
                        cout << "ValueError in calculation: arccos(" << cos_o << ") is out of range" << endl;
                    }
                }
            }
        } else if (choice == 6) {
            // Spring Force Case
            char variable;
            cout << "Which variable do you want to solve for? (f, k, x): ";
            cin >> variable;

            if (variable == 'f') {
                double k, x;
                cout << "Enter spring constant (k): ";
                cin >> k;
                cout << "Enter displacement (x): ";
                cin >> x;
                double f = -k * x;
                cout << "Spring Force (f) = " << f << endl;
            } else if (variable == 'k') {
                double f, x;
                cout << "Enter spring force (f): ";
                cin >> f;
                cout << "Enter displacement (x): ";
                cin >> x;
                double k = -f / x;
                cout << "Spring Constant (k) = " << k << endl;
            } else if (variable == 'x') {
                double f, k;
                cout << "Enter spring force (f): ";
                cin >> f;
                cout << "Enter spring constant (k): ";
                cin >> k;
                double x = -f / k;
                cout << "Displacement (x) = " << x << endl;
            }
        }

        cout << "Solve more? Y/N: ";
        cin >> restart;
    }

    cout << "The program will now exit." << endl;

    return 0;
}
