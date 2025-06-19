/*//
# - Besic Timer program using c++
Created By - @Manual Coder
//*/

#include <iostream>
 #include <thread>
 #include <cstdlib>
 #include <chrono>

int main(int argc, char*argv[]) {
int hours, minutes, seconds;

/*//Begening of input//*/
// Forces the user to enter a number
std::cout << "Enter Hour: ";
while(!(std::cin>> hours)) {
	std::cin.clear();
	std::cin.ignore(64, '\n');
	std::cout << "Number expected>> ";
}

std::cout << "Enter Minutes: ";
while(!(std::cin>> minutes)) {
	std::cin.clear();
	std::cin.ignore(64, '\n');
	std::cout << "Number expected>> ";
}

std::cout << "Enter Seconds: ";
while(!(std::cin>> seconds)) {
	std::cin.clear();
	std::cin.ignore(64, '\n');
	std::cout << "Number expected>> ";
}
// Error message: if user enters an unexpected input, and exit the program with an error
if (hours > 72 || minutes > 59 || seconds > 59) {
	   system("clear");
    	std::cout << "Error Code: 406\n\nExpected Input >>\nHours: 1 ... 72\nMinutes: 1 ... 59\nSeconds: 1 ... 59\n"; // Exit with error
	return 1;
} system("clear");


while ( hours > 0 || minutes > 0 || seconds > 0) {
   std::cout << "Time remaining is \n\n " << hours << " : " << minutes << " : " << seconds << '\n';

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    // Logic goes here
    if (seconds > 1) {
   	seconds--;
    } else {
   	if (minutes > 0) {
 	  	minutes--;
   		seconds = 59;
   	} else {
 	  	if (hours > 0) {
 	  		hours--;
   			minutes = 59;
   		 }
   	 }
    }
    system("clear");
    }
  // Sucessefully completed without error
  return 0;
}