#include <iostream>
#include "rec_fun.h" 

using namespace std;

void binary_print(ostream& outs, unsigned int n) {
    if (n < 2) {
        cout << n;
    }

    else { 
        binary_print( outs, n/2);
        cout << (n % 2);
    }
}

void triangle(ostream& outs, unsigned int m, unsigned int n) {
    if (m>n) 
    return; 
    
    else{
        for (int i = 1; i <=m; i++)
        {outs << "*";} 
        outs<< endl; 

        triangle(outs,m +1, n);

        for (int q = 1; q <= m; q++)
        {outs << "*";}
        outs << endl;
        }
}

double pow(double x, int n) {

    int y = 1;

    while (n > 0) {
        if(n & 1)
        y = y * x;
        n = n >> 1;
        x = x * x;
    }

    return y;
}

void indented_sentences(size_t m, size_t n) {
    if(m > n)
    return;

    else {
        for(int i = 1; i < m; i++)
        cout << " ";
        cout << "This was written by calling number " << m << "." << endl;
        indented_sentences(m +1 , n );
        for( int i = 1; i < m; i++)
        cout << " ";
        cout << "This was ALSO writted by calling number " << m << "." << endl;

    }
}

// we use int main to implement the rules above 

int main() { 

binary_print(cout , 4 ); //change the 4 to any number you like

cout << endl; // the cout<<endl is used for spacing the outputs when you run the program
cout << endl;

triangle(cout,3, 5); //change the numbers 3 and 5 to any numbers you like

cout << endl;

cout << pow(2,3) << endl; //change the numbers 2 and 3 to any numbers you like

cout << endl;

indented_sentences(1,4); //change the numbers 1 and 4 to any numbers you like

return 0;
}
