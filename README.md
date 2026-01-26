// Vectors_Challenge_1
#include <iostream>
#include <string>
#include <limits>

//global arrays
const std::string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
const std::string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main () {
  int choice, dayNum, monthNum;
  do {
    std::cout <<"1. Day\n 2. Month\n 3. Quit\n";
    std::cin >> choice;
    if (std::cin.fail()) {
      std::cin.clear(); //to clear off the error
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //this will erase all trash words
      continue; //this will jump to the start of the menu
    }
    switch (choice) {
      case 1:
        std::cout << "Enter the day number";
        std::cin >> dayNum;
        if (dayNum >= 1 && dayNum <= 7) {
          std::cout << "Day: " << days[dayNum - 1] << std::endl;
        } else {
          std::cout << "Hmmm, this is an invalid day!" << std::endl;
        }
        break;
      case 2:
        std::cout << "Enter the day of the month";
        std::cin >> monthNum;
        if (monthNum >= 1 && monthNum <= 12) {
          std::cout << "Month: " << months[monthNum - 1] << std::endl;
        } else {
          std::cout << "Are you sure this is what you meant to enter?" << std::endl;
        }
        break;
      case 3:
        std::cout << "Try again later";
        break;
      default:
        std::cout << "Option not valid";
        break;
    }
  } while (choice != 3);


  return 0;
}
