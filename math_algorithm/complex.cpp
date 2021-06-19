#include <complex>
using namespace std;
int main(){
    /*定義*/
    complex<double> a(1,2); //1+2i
    /*実部・虚部の取り出し*/
    cout << a << " " << a.real() << " " << a.imag() << endl;
    /*極座標(絶対値1,偏角pi/4の複素数を作る)*/
    complex<double> b = polar(1.0, M_PI/4.0);
    cout << b << endl;
    cout << a*b << endl;
}
