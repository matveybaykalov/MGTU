#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    using std::cin;
    using std::cout;
    using std::abs;

    int x;
    cin >> x;
    cout << std::showpos<< pow (x,7)-5*pow(x, 5)-1 << std::endl;

    unsigned int a;
    cin >> a;
    float s=abs(int(a-2))+std::sqrt(a+1);
    int s1=std::floor(s);
    s=(s-s1)*1000;
    cout << std::noshowpos <<s1 <<'.' << std::setprecision(3) << s << std::endl;

    bool n,l,m, k;
    cin>>n>>l>>m>>k;
    cout<<std::boolalpha<<n&&l||(!m&!k|m&k);
    cout<<std::endl;

    int b, t;
    t=1;
    cin>>b;
    t<<=b;
    cout << t <<' '<< std::oct << t <<std::endl;

    unsigned short int c, d, e, f, q;
    cin >> c >> d >> e >> f;
    cout << std::showbase << std::internal<< std::hex  << std::setw(6)<< std::setfill('0') << ((~e|d) & c^f) ;

    return 0;

}
