#include <iostream>
#include <iomanip>

using namespace std;

float countBMI(float m, float kg){
    return kg / (m *m);
}

void BMIproccess(){
    float weight, height, result;

    cout << "//BMI CALCULATOR//" << endl;
    cout << "Insert Weight (Kg)";
    cin >> weight;
    cout << "Insert Height (cm)";
    cin >> height;

    //convert cm to meters
    height = height / 100;

    //adding categories for the BMI
    cout << "Category: ";
    if (result = < 18.50) << "Underweight" << endl;
    else if (result = < 25) << "Ideal (Yi Sang approves)" endl;
}
