
    // Declare second integer, double, and String variables.
#include<iomanip>

int q = 0;
cin>>q;

double w = 0;
cin>>w;

string e;
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
getline(std::cin, e);

cout<<i + q<<endl;
cout<<setprecision(1)<<fixed<<d + w<<endl;
cout<<s + e<<endl;
