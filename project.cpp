#include<iostream>
#include<iomanip>
#include<chrono>
#include<thread>
using namespace std;

int main(){
    int hr, min, sec;
    char format_choice;
    bool is_12_hr_format = false;

    cout << "Choose 1 for 12 hr and 2 for 24 hr format: " << endl;
    cin >> format_choice;

    if(format_choice == '1'){
        is_12_hr_format = true;
        cout << "12 hr format" << endl;
    }
    else if (format_choice == '2'){
        is_12_hr_format = false;
        cout << "24 hr format" << endl;
    }
    else{
        cout << "Wrong input" << endl;
        return 1;
    }

    cout << setw(70) << "Enter the current time" << endl;
    cout << "Hr: ";
    cin >> hr;
    cout << "Min: ";
    cin >> min;
    cout << "Sec: ";
    cin >> sec;

    if(!is_12_hr_format && (hr < 0 || hr > 23)){
        cout << "Invalid hour, write between 0 and 23" << endl;
        return 1;
    }
    if(is_12_hr_format && (hr < 1 || hr > 12)){
        cout << "Invalid hour, write between 1 and 12" << endl;
        return 1;
    }
    if(min < 0 || min > 59){
        cout << "Invalid minute" << endl;
        return 1;
    }
    if(sec < 0 || sec > 59){
        cout << "Invalid second" << endl;
        return 1;
    }

    while(true){
        cout << "\033[2J\033[1;1H";  // Clear the screen

        if(is_12_hr_format){
            string period = (hr >= 12) ? "PM" : "AM";
            int display_hr = (hr % 12 == 0) ? 12 : hr % 12;
            cout << "Current time: " << setw(2) << setfill('0') << display_hr << " hr:"
                 << setw(2) << setfill('0') << min << " min:"
                 << setw(2) << setfill('0') << sec << " sec: " << period << endl;
        }
        else{
            string period = (hr >= 12) ? "PM" : "AM";  // Adding AM/PM for 24-hour format
            int display_hr = hr;
            if(display_hr == 0) display_hr = 12;  // Midnight as 12 AM
            else if(display_hr == 12) period = "PM";  // Noon as 12 PM

            cout << "Current time: " << setw(2) << setfill('0') << display_hr << " hr:"
                 << setw(2) << setfill('0') << min << " min:"
                 << setw(2) << setfill('0') << sec << " sec: " << period << endl;
        }

        this_thread::sleep_for(chrono::seconds(1));
        sec++;

        if(sec == 60){
            sec = 0;
            min++;
            if(min == 60){
                min = 0;
                hr++;
                if(is_12_hr_format && hr == 13){
                    hr = 1;  // Reset to 1 after 12 PM
                }
                else if(!is_12_hr_format && hr == 24){
                    hr = 0;  // Reset to 00 after 23:59
                }
            }
        }
    }

    return 0;
}
