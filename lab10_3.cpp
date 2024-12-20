//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt") ;
    string x;
    double z=0.0;
    double c=0.0;
    int y = 0;
    double am;
    while(getline(source,x)){
		z = z + atof(x.c_str() );
        c = c + atof(x.c_str()) * atof(x.c_str());
        y++;
	}
    double o;
    o =  double(z/y);
  
    am = double(sqrt(c/y-o*o));
    cout << "Number of data = " << y << "\n";
    cout << setprecision(3);
    cout << "Mean = " << o << "\n";
    cout << "Standard deviation = " << am << "\n";
 

}

