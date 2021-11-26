#include <iostream>
#include <cmath> 

using namespace std;

double pi = M_PI;

double deg2rad(double x){
    
    double y = x * (pi/180.0);
    return y;
}

double rad2deg(double Z){
    double w = Z * (180.0/pi);
    return w;
}

double findXComponent(double l1,double l2,double A1,double A2){
    double result1 = l1 *cos(A1) + l2 *cos(A2);
    return result1;
}

double findYComponent(double l1,double l2,double A1,double A2){
    double result2 = l1 *sin(A1) + l2 *sin(A2);
    return result2;
}

double pythagoras(double Line1 ,double Line2){
    double u = sqrt(pow(Line1, 2) + pow(Line2, 2));
    return u;
}

void showResult(double result_Length,double result_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout << "\nLength of the resultant vector = " << result_Length;
    cout << "\nDirection of the resultant vector (deg) = " << result_direction;
    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
} 



int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}