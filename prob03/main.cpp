// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double tax, tip, mealcost;
  int area;

  // Get the tax, tip, and meal cost
  std::cout << "What is the total " mealcost? ";
  std::cin >> mealcost;
  std::cout << "What is the \"tip\" percentage? ";
  std::cin >> tip;
  std::cout << "What is the \"tax\" percentage? ";
  std::cin >> tax;

  // Calculate the tax and tip, as well as the total bill after tax and tip are applied.
tax amount = tax * mealcost;
total bill = mealcost + tax + tip;
tip amount = tip * meal cost;

  // Display the tax amount, tip amount, and total bill.
  std::cout << "The tax is "<< tax amount <<" dollars " << std::endl;
std::cout << "The tip is "<< tip amount <<" dollars " << std::endl;
std::cout << "The total bill is "<< total bill <<" dollars " << std::endl;
  return 0;
}
