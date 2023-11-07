#include <iostream>
using namespace std;

void reverse(char sirname[], int n)

{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(sirname[s], sirname[e]);
        s++;
        e--;
    }
}


int getlength(char sirname[])
{
    int count =0 ;
    for(int i=0 ; sirname[i]!= 0 ; i++)
    {
        count ++ ;

    }
    return count ;
}

int main()
{
    char sirname[20];
    cout << " enter your name " << endl;

    cin >> sirname;

    int length = getlength(sirname );

    cout<<"length of given char is "<<length <<endl;

    reverse(sirname, length);
    cout << " reversed character is " << sirname<<endl;

    return 0;
}
  