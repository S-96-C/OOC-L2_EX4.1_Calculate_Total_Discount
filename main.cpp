#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float price, discount, count = 0, totalDis=0;

  while (count<3)
  {

    cout << "Enter the customer total price :";
    cin >> price;

    if (price>=10000)
    {
      discount = (25*price)/100.0;
      cout << "Your discount is :" << fixed << setprecision(2) << discount << endl; 
    }

    else if (price>=5000)
    {
      discount = (15*price)/100.0;
      cout << "Your discount is :" << fixed << setprecision(2) << discount << endl;
    }

     else if (price>=3000)
    {
      discount = (10*price)/100.0;
      cout << "Your discount is :" << fixed << setprecision(2) << discount << endl;
    }

     else
    {
      discount = 0.0;
      cout << "No discount :" << endl;
    }
    count++;

    if (price >= 3000)
    {
      totalDis = totalDis + discount;
    }

  }

  cout << "Total discount is : " << fixed << setprecision(2) << totalDis << endl;
  return 0;
  
}