#include <iostream>
#include <cmath>
 
using namespace std;
 
struct point {
    int x, y;
};
 
int main() {
    int n; cin >> n;
 
    double res = 0;
    point res_p;
    res_p.x = 0;
    res_p.y = 0;
 
    for (int i = 0; i < n; ++i) {
        point a;
        cin >> a.x >> a.y;
        double cur = sqrt(a.x*a.x+a.y*a.y);
        if (cur > res) {
            res = cur;
            res_p = a;
        }
    }
   
    cout << res_p.x << " " << res_p.y << endl;
   
    return 0;
}
 