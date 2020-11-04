#include <iostream>
#include <bitset>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string dec2bin(int z) {
    int a;
    string liczba;
    if (z > 0) {
        a = z;
        liczba = "";
    } 
	else {
        a = z * -1;
        liczba = "-";
    }

    string binary = bitset<8>(a).to_string();
    binary.erase(0, min(binary.find_first_not_of('0'), binary.size()-1));
    
    
    binary = liczba + binary;

    return binary;
}

int main(int argc, char** argv) {

    int a;
    int b;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: " << "\n";
    cin >> b;

    string binarya=dec2bin(a);
    string binaryb=dec2bin(b);
    
    string aandb = dec2bin((a & b));
    string aorb= dec2bin((a | b));
    string axorb = dec2bin((a ^ b));


    cout << "Liczba a w systemie dwojowym: " << binarya << "\n";
    cout << "liczba b w systemie dwojkowym: " << binaryb << "\n\n";

    cout << "A & B: " << aandb << "\n";
    cout << "A | B: " << aorb << "\n";
    cout << "A ^ B: " << axorb << "\n\n";
    
    cout << "Negacja bitowa: " << ~a << "\n";
    cout << "Negacja bitowa: " << ~b;



    return 0;
}
