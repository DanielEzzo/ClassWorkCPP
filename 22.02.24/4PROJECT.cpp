

#include <iostream>
using namespace std;
int main()
{
    /*
    int a, b, n;
    cin >> a >> b >> n;
    while (b <= a) {
        if (b % n == 0) {
            cout << b << " ";
        }
        b++;
    }
    
    long a, b, sum;
    cin >> a >> b;

    if (a < b) {
        swap(a, b);
    }

    while (b <= a) {
        if (!(b % 2 )) {
            cout << b << " ";
            sum += b;
        }
        
        b++;
    }
    cout << sum;
    

    int a, b;
    cin >> a >> b ;
    if (a < b) {
        swap(a, b);
    }
    while (b <= a) {
        cout << a--<<" ";
    }
    

    double num, sum=0.0 ;
    cin >> num;
    while (num != 0) {
        sum += num;
        cin >> num;
    }
    cout << sum ;
    
    int min, max;
    cin >> min >> max;
    if (max < min) {
        swap(min, max);
    }
    do{
        cout << min++;
    } while (min < max);
    

    int n = 1;
    while (n < 3) 
    {
        cout << n++;
    }
    do {}
    

    int gran1, gran2, num;
    cin >> gran1 >> gran2 >> num;
    if (gran2 < gran1) {
        swap(gran1, gran2);
    }
    while ((gran1 > num) && (num > gran2)) {

    }
    */

    int  vibor;
    double korzina = 0.0, skidka;
    cout << "1 - girlinda, 2 - shari, 3 - zvezda, 4 - mishura, 0 - chek, 5 - skidka - 100 rub" << endl;
    cin >> vibor;
    while (vibor != 0) {
        

        switch (vibor) {
        case 1:
            korzina += 1000;
            break;
        case 2:
            korzina += 200;
            break;
        case 3:
            korzina += 500;
            break;
        case 4:
            korzina += 150;
            break;
        case 5:
            cout << "kol-vo rub v prozentah" << endl;
            cin >> skidka;
            break;
        }
        cout << "1 - girlinda, 2 - shari, 3 - zvezda, 4 - mishura, 0 - chek, 5 - skidka - 100 rub" << endl;
        cin >> vibor;
    }
    cout << korzina - (skidka * 0,01);
}
