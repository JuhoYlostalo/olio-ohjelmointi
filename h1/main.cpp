#include <iostream>
#include <iomanip>
using namespace std;

void calcSum(int, int);
void calcDiv(int, int);
float retDiv(int, int);
int retSum(int, int);

int main()
{
    int a;
    int b;
    cout << "Anna luku a" << endl;
    cin >> a;
    cout << "Anna luku b" << endl;
    cin >> b;
    cout << "Lukujen a ja b summa on " << endl;
    calcSum(a,b);
    cout << retSum(a,b) << endl;
    cout << "Lukujen a ja b osamaara on " << endl;
    calcDiv(a,b);
    cout << fixed << setprecision(2) << retDiv(a,b) << endl;


}


void calcSum (int num1, int num2){
    cout << num1 + num2 << endl;
}

void calcDiv (int num1, int num2){
    if (num1==0 || num2==0 ){
      cout << "ei voi jakaa nollalla" << endl;
    }
    else {
        float result = (num1 * 1.0) / num2;
        cout << fixed << setprecision(2) << result <<endl;
    }
}

int retSum (int num1, int num2){
    int result = num1 + num2;
    return result;
}

float retDiv  (int num1, int num2){
    if (num1==0 || num2==0 ){
        cout << "ei voi jakaa nollalla" << endl;
        return 0;
    }
    else{
        float result = (num1 * 1.0) / num2;
        return result;
    }
}