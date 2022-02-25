#define _USE_MATH_DEFINES
#include <iostream> 
#include <cmath>
using namespace std;
int k;
double R, A, B, C, S;
double Circle()
{
    cout << "R:\n";
    cin >> R;
    if (R > 0)
    {
        S = M_PI * R * R;
        if (S >= 0)
            return S;
    }
    else
    {
        cerr << "error" << endl;
        return 0;
    }

}
double Rectangle()
{
    cout << "A,B:\n";
    cin >> A >> B;
    if ((A > 0) && (B > 0))
    {
        S = A * B;
        return S;
    }
    else
    {
        cerr << "error" << endl;
        return 0;
    }

}
double Triangle()
{
    cout << "A, B, C:\n";
    cin >> A >> B >> C;
    if ((A > 0) && (B > 0))
    {
        double p;
        p = (A + B + C) / 2;
        S = sqrt(p * (p - A) * (p - B) * (p - C));
        if (S >= 0)
        {
            return S;
        }
        else
        {
            cerr << "error" << endl;
            return 0;
        }
    }
    else
    {
        cerr << "error" << endl;
        return 0;
    }

}
int main() {
    cout << "1-rectangle\n2-triangle\n3-circle\n";
    cin >> k;
    switch (k) {
    case 1:
        cout << Rectangle();
        break;
    case 2:
        cout << Triangle();
        break;
    case 3:
        cout << Circle();
        break;
    default:
        cerr << "error" << endl;
        break;
    }
}