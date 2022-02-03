#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double first(double& a, double& ux){
    // z = ax + b

double uz = sqrt(pow(a,2)) * ux;
return uz;
}

double second(double& ux, double& uy){
    // z = x + y

    double uz = sqrt((ux * ux) + (uy * uy));
            return uz;


}
double third(double& x, double& ux, double& y, double& uy, double& z){
    // z = cxy

    double uz = z * sqrt(pow(ux/x , 2) + pow(uy/y, 2));
    return uz;
}

double fourth(double& x, double& ux, double& y, double& uy, double& z){
    //z = c(x/y)

    double uz = z * sqrt(pow(ux/x , 2) + pow(uy/y, 2));
    return uz;
}

double fifth(double& a, double& x, double& ux, double& z){
    //z =cx^a

    double uz = z * sqrt(pow(a,2)) * (ux/x);
    return uz;
}

double sixth(double& a, double& b, double& x, double& ux, double& y, double &uy, double& z) {
    //z = c(x^a)(y^a)

    double uz = z * sqrt(pow((a * (ux / x)), 2) + pow((b * (uy / y)), 2));
    return uz;
}


int main() {
   string sel = "yes";
cout << "Hello, World! This is an uncertainty calculator for the shitty class that is Physics 2!\n" << std::endl;
cout << "identify the form of equation you are calculating the uncertainty of below.\n Then choose the number of the function you want.\n Finally, input the variables You want\n";
int i = 0;
    while(sel == "yes"){
        double a;
        double b ;
        double x ;
        double ux ;
        double y;
        double uy ;
        double z;
        cout << "Here is the list of functions:\n"
                "\n1     z = ax + b"
                "\n2     z = x + y"
                "\n3     z = cxy"
                "\n4     z = c(x/y)"
                "\n5     z =cx^a"
                "\n6     z = c(x^a)(y^a)";
        int h = 1;

            cout << "\nEnter the number of the function you want to calculate:  ";
            int func;
            cin >> func;
            cout << "\n";
            if (func == 1) {
                h = 0;
                cout << "Based on the form z = ax + b\n";
                cout << "Enter a: ";
                cin >> a;
                cout <<"\n Enter uncertainty of x: ";
                cin >> ux;
                cout << "\n Trial number " << i << "\n";
                cout << "\n The uncertainty of z is: ";
                cout << first(a, ux);
            } else if (func == 2) {
                h = 0;
                cout << "Based on the form z = x + y";
                cout << "\nEnter uncertainty of x: ";
                cin >> ux;
                cout <<"\n Enter uncertainty of y: ";
                cin >> uy;
                cout << "\n Trial number " << i << "\n";
                cout << "\n The uncertainty of z is: ";
                cout << second(ux, uy);
                cout << "\n";
            } else if (func == 3) {
                h = 0;
                cout << "Based on the form z = cxy\n";
                cout << "Enter  x: ";
                cin >> x;
                cout << "\nEnter uncertainty of x: ";
                cin >> ux;
                cout <<"\n Enter  y: ";
                cin >> y;
                cout <<"\n Enter uncertainty of y: ";
                cin >> uy;
                cout <<"\n Enter z: ";
                cin >> z;
                cout << "\n Trial number " << i << "\n";
                cout << "\n The uncertainty of z is: ";
                cout << "\n";
                cout << third(x, ux, y, uy, z);
            } else if (func == 4) {
                h = 0;
                cout << "Based on the form z = c(x/y)";
                cout << "\nEnter  x: ";
                cin >> x;
                cout << "\nEnter uncertainty of x: ";
                cin >> ux;
                cout <<"\n Enter  y: ";
                cin >> y;
                cout <<"\n Enter uncertainty of y: ";
                cin >> uy;
                cout <<"\n Enter z: ";
                cin >> z;
                cout << "\n Trial number " << i << "\n";
                cout << "\n The uncertainty of z is: ";
                cout << fourth(x, ux, y, uy, z);
                cout << "\n";
            } else if (func == 5) {
                h = 0;
                cout << "Based on the form z = c(x^a)";
                cout << "\nEnter  a: ";
                cin >> a;
                cout << "\nEnter  x: ";
                cin >> x;
                cout << "\nEnter uncertainty of x: ";
                cin >> ux;
                cout <<"\n Enter z: ";
                cin >> z;
                cout << "\n Trial number " << i << "\n";
                cout << "\n The uncertainty of z is: ";
                cout << fifth(a,x,ux,z);
                cout << "\n";
            } else if (func == 6) {
                h = 0;
                cout << "Based on the form z = c(x^a)(y^a)";
                cout << "\nEnter  a: ";
                cin >> a;
                cout << "\nEnter  b: ";
                cin >> b;
                cout << "\nEnter  x: ";
                cin >> x;
                cout << "\nEnter uncertainty of x: ";
                cin >> ux;
                cout <<"\n Enter  y: ";
                cin >> y;
                cout <<"\n Enter uncertainty of y: ";
                cin >> uy;
                cout <<"\n Enter z: ";
                cin >> z;
                cout << "\n Trial number " << i << "\n";
                cout << "\n The uncertainty of z is: ";
                cout << sixth(a,b,x,ux,y,uy,z);
                cout << "\n";

            } else {
                cout << "Invalid input, you're gay\n";
            }


        int g = 1;
        while(g == 1) {
            cout << "\ndo you want to calculate uncertainty again you lazy sack of shit?\n yes/no:   " << " ";
            cin >> sel;
            if ( sel == "yes"){
                g = 0;
                i++;
            } else if(sel == "no"){
                g = 0;
            }else {
                cout << "Incorrect input, trying again\n";
                g = 1;
            }
        }
    }
    return 0;
}
