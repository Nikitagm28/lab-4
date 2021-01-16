Задание 1:
#include <iostream>
#include <math.h>
int main() {
    int a=0, b=0;
    std::cout << "Enter a, b: ";
    std::cin >> a >> b;
    std::cout << "S = " << a * b << std::endl;
    std::cout << "P = " << 2 * (a + b) << std::endl;
    system("pause");
    return 0;
}

Задание 2:
#include <iostream>
#include <math.h>
int main() {
    int p=3.14, d=0;
    std::cout << "Enter d: ";
    std::cin >> d;
    std::cout << "L = " << p * d << std::endl;
    system("pause");
    return 0;
}

Задание 3:
#include <iostream>
#include <math.h>
int main() {
    int a=0, b=0;
    std::cout << "Enter a, b: ";
    std::cin >> a >> b;
    std::cout << "S = " << (a + b) /2 << std::endl;
    system("pause");
    return 0;
}

Задание 4:
#include <stdio.h>
#include <math.h>
 int main(void) {
     float a, b;
     printf("a:");
     scanf ("%f", &a);
     printf("b:");
     scanf ("%f", &b);
     printf("%f\n",a*a+b*b);
     printf("%f\n",a*a-b*b);
     printf("%f\n",a*a*b*b);
     printf("%f\n",(a*a)/(b*b));
     return 0;
}

Задание 5:
#include <iostream>
using namespace std;
int main() {
    double val1 = 0;
    double val2 = 0;
    cin >> val1 >> val2;
    cout << "Cумма = " << val1+val2 << "\n";
    cout << "Разность = " << val1-val2 << "\n";
    cout << "Произведение = " << val1*val2 << "\n";
    cout << "Частное = " << val1/val2 << "\n";
}
