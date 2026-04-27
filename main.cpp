// Vectors_Challenge_1
#include <iostream> 
#include <string>
#include <limits>

//global arrays
const std::string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
const std::string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main() {
    int choice;
    do {
        std::cout << "\nSelect one number, then hit the enter key" << std::endl;
        std::cout << "1. Day Name by Number (1-7)\n2. Month Name by Number (1-12)\n3. Quit\n" << std::endl;
        std::cout << "Choice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear(); //to clear off the error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //this will erase all trash words
            std::cout << "WHAT IS THAT????, try again using numbers!" << std::endl;
            continue;
        }
        switch (choice) {
        case 1: {
            int dayNum;
            std::cout << "Enter a day number (1-7): ";
            std::cin >> dayNum;
            if (std::cin.fail()) {
                std::cin.clear(); //to clear off the error
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //this will erase all trash words
                std::cout << "Invalid input type!!" << std::endl;
            }
            else if (dayNum >= 1 && dayNum <= 7) {
                std::cout << "Result: " << days[dayNum - 1] << std::endl;
            }
            else {
                std::cout << "Invalid Day Number!" << std::endl;
            }
            break;
        }
        case 2:{
            int monthNum;
            std::cout << "Enter a month number (1-12): ";
            std::cin >> monthNum;
            if (std::cin.fail()) {
                std::cin.clear(); //to clear off the error
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //this will erase all trash words
                std::cout << "Invalid input type!" << std::endl;
            }else if (monthNum >= 1 && monthNum <= 12) {
                std::cout << "Result: " << months[monthNum - 1] << std::endl;
            }else {
                std::cout << "Invalid Month Number!" << std::endl;
            }
            break;
        }

        case 3:
            std::cout << "Have a nice day!" << std::endl;
            break;

        default:
            std::cout << "Option no available. Try again. " << std::endl;
            break;
        }
    } while (choice != 3);

    return 0;
}