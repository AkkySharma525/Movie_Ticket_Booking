#include <iostream>
#include <iomanip>
using namespace std;

const int row = 5, col = 10;
const int premium_price = 300; // Price for rows A and B
const int standard_price = 200; // Price for rows C, D, and E

void display(bool seats[row][col]) {
    system("cls"); 
    cout << "\n_________________________________\n\n";
    cout << setw(19) << "Screen";
    cout << "\n_________________________________\n";
    cout << "  ";
    for (int i = 1; i <= col; i++) {
        cout << setw(3) << i;
    }
    cout << endl;
    for (int i = 0; i < row; i++) {
        cout << static_cast<char>('A' + i) << " ";
        for (int j = 0; j < col; j++) {
            if (seats[i][j]) {
                cout << setw(3) << "X";
            } else {
                cout << setw(3) << "-";
            }
        }
        cout << endl;
    }
    cout << "_________________________________\n";
}

void reservation(bool seats[row][col], int c, char r, int &totalCost) {
    int row_index = r - 'A';
    int price = (row_index < 2) ? standard_price : premium_price;

    if (seats[row_index][c - 1]) {
        cout << "Seat is already booked.\n";
    } 
    else {
        seats[row_index][c - 1] = true;
        totalCost += price;
        cout << "Congrats! You have booked your seat.\n";
        cout << "Seat: " << r << c << " | Price: " << price << " INR\n";
    }
}

void cancel_reservation(bool seats[row][col], int c, char r, int &totalCost) {
    int row_index = r - 'A';
    int price = (row_index < 2) ? standard_price : premium_price ;

    if (seats[row_index][c - 1]==false) {
        cout << "Seat is not yet booked.\n";
    } else {
        seats[row_index][c - 1] = false;
        totalCost -= price;
        cout << "Reservation for seat " << r << c << " has been cancelled.\n";
    }
}

void show_summary(bool seats[row][col], int totalCost) {
    cout << "\nSummary of Booked Seats:\n";
    cout << "-------------------------\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (seats[i][j]) {
                cout << "Seat: " << static_cast<char>('A' + i) << j + 1 << endl;
            }
        }
    }
    cout << "-------------------------\n";
    cout << "Total Cost: " << totalCost << " INR\n";
    cout << "Thank you for using the booking system!\n";
}

int main() {
    bool seats[row][col] = {false};
    int totalCost = 0;
    display(seats);
    cout << "Welcome to Movie Ticket Booking!\n";
    cout << "Movie: Jab We Met | Time: 7:30 PM | Duration: 3h 2m\n";
    cout << "Premium Rows (C-E): 300 INR per seat\n";
    cout << "Standard Rows (A-B): 200 INR per seat\n";

    while (true) {
        char choice; 
        cout << "\nMenu:\n";
        cout << "Press 1 Book a Seat\n";
        cout << "Press 2 Cancel a Seat\n";
        cout << "Press 3 View Summary\n";
        cout << "Press 4 Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            char r;
            int c;
            cout << "Enter Row (A-E): ";
            cin >> r;
            cout << "Enter Column (1-10): ";
            cin >> c;

            if (r < 'A' || r > 'E' || c < 1 || c > 10) {
                cout << "Enter valid Row/Column\n";
                continue;
            }
            reservation(seats, c, r, totalCost);
            display(seats);

        } 
        else if (choice == '2') {
            char r;
            int c;
            cout << "Enter Row (A-E): ";
            cin >> r;
            cout << "Enter Column (1-10): ";
            cin >> c;

            if (r < 'A' || r > 'E' || c < 1 || c > 10) {
                cout << "Enter valid Row/Column\n";
                continue;
            }
            cancel_reservation(seats, c, r, totalCost);
            display(seats);

        } 
        else if (choice == '3') {
            show_summary(seats, totalCost);

        } 
        else if (choice == '4') {
            cout << "Exiting the system. Have a great day!\n";
            break;

        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
