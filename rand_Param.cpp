#include <iostream>
#include <cstring>
using namespace std;

int main(int num, char** argsv)
{
srand(time(NULL));
int randNum = rand()  % 4 + 1;
if(num < 2 || num > 5)
{
cout << "please enter between 1 and 4 parameters" << endl;
}
else if(num - 1 == randNum )
{
    cout << "That's correct! I take " << randNum << " parameters!" << endl;
return 0;
}
else
{
        cout << "You have guessed incorrectly. I take " << randNum << " parameters. Do not pass go and do not collect $200." << endl;   
}





    return 1;
}

