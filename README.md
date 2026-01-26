// Vectors_Challenge_1
#include <iostream>
#include <string>
#include <limits>

//global arrays
const std::string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
const std::string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main() {
    int choice, dayNum, monthNum;
    do {
        std::cout << "Select one number, then hit the enter key" << std::endl;
        std::cout << "1. Day\n2. Month\n3. Quit\n" << std::endl;
        std::cin >> choice;
        if (std::cin.fail()) {
            std::cin.clear(); //to clear off the error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //this will erase all trash words
            continue; //this will jump to the start of the menu
        }
        switch (choice) {
        case 1:
            std::cout << "Enter one day of the week, select from 1 to 7: ";
            std::cin >> dayNum;
            if (dayNum >= 1 && dayNum <= 7) {
                std::cout << "Day: " << days[dayNum - 1] << std::endl;
            }
            else {
                std::cout << "Number day invalid!" << std::endl;
            }
            break;
        case 2:
            std::cout << "Enter the number of the month, select from 1 to 12: ";
            std::cin >> monthNum;
            if (monthNum >= 1 && monthNum <= 12) {
                std::cout << "Month: " << months[monthNum - 1] << std::endl;
            }
            else {
                std::cout << "Number month invalid" << std::endl;
            }
            break;
        case 3:
            std::cout << "Have a nice day!";
            break;
        default:
            std::cout << "Quit ";
            break;
        }
    } while (choice != 3);


    return 0;
}
