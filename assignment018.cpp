#include <iostream>
using namespace std;
int main()
{
    double salary = 5000.98;
    // 8 Bytes
    cout << "Size of 5000.98 in Bytes : " << sizeof(salary) << " \n ";
        // 64 Bits
    cout
        << " Size of 5000.98 in Bits : " << sizeof(salary) * 8 << " \n ";

    double user_salary;
    cout << " Please put your salary : ";
    cin >> user_salary;
    // 8 Bytes
    cout << " Size in Bytes : " << sizeof(user_salary) << " \n ";

    // 64 Bits
    cout << " Size in Bits : " << sizeof(user_salary) * 8 ;

    return 0;
}
