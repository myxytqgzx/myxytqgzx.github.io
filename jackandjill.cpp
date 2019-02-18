/*
* Tianqi Yang
* CIS 22A M/W
*/
#include <iostream>
using namespace std;
int main ()
{
    int i = 1;
    for(i; i <= 150; i++){
        if ( i%5==0 && i%7==0){
            cout << "Went Up the Hill" <<endl;
        }
        else if (i%7 == 0){
            cout << "Jill" << endl;
        }
        else if (i%5 ==0) {
            cout << "Jack" <<endl;
        }
        else{
            cout << i << endl;
        }
    }
return 0;
}
