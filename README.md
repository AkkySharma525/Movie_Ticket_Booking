# Movie Ticket Booking System

This is a simple console-based movie ticket booking system built using C++. The system allows users to book and cancel movie tickets in a theater with a seating arrangement. The system also provides a summary of booked tickets and calculates the total cost based on the row and seat type (Standard and Premium).

## Features

- **Book a seat**: Allows users to choose a seat from the available rows and columns (A-E, 1-10). Premium and standard pricing is implemented for different rows.
- **Cancel a reservation**: Users can cancel their existing seat reservation.
- **View summary**: Displays the list of all booked seats and the total cost.
- **Exit the system**: Allows the user to exit the system when done.

## Pricing Information

- **Premium Rows (C-E)**: 300 INR per seat.
- **Standard Rows (A-B)**: 200 INR per seat.

## System Requirements

- A C++ compiler that supports C++11 or higher.
- Operating System: Any OS supporting a C++ compiler (Windows, Linux, macOS).

## How to Use

1. **Book a Seat**: 
   - Select option `1` to book a seat.
   - Enter the row (A-E) and column (1-10).
   - The system will confirm your reservation and show the updated seating chart.
   
2. **Cancel a Seat**:
   - Select option `2` to cancel a reservation.
   - Enter the row and column of the seat to be canceled.
   - The system will update the seat and show the current seating chart.

3. **View Summary**:
   - Select option `3` to view the list of booked seats and the total cost.

4. **Exit**:
   - Select option `4` to exit the program.

## Code Explanation

- **Display Function**: This function displays the current seating arrangement. `X` represents booked seats, and `-` represents available seats.
- **Reservation Function**: Handles booking of a seat, updates the seating chart, and calculates the cost based on the seat's row (premium or standard).
- **Cancel Reservation Function**: Handles canceling a booked seat, updates the seating chart, and deducts the cost from the total.
- **Show Summary Function**: Displays the summary of all booked seats and the total cost incurred.

## Example Usage

Welcome to Movie Ticket Booking! Movie: Jab We Met | Time: 7:30 PM | Duration: 3h 2m Premium Rows (C-E): 300 INR per seat Standard Rows (A-B): 200 INR per seat
Menu: Press 1 Book a Seat Press 2 Cancel a Seat Press 3 View Summary Press 4 Exit Enter your choice: 1 Enter Row (A-E): B Enter Column (1-10): 5 Congrats! You have booked your seat. Seat: B5 | Price: 200 INR
Menu: Press 1 Book a Seat Press 2 Cancel a Seat Press 3 View Summary Press 4 Exit Enter your choice: 3

## Summary of Booked Seats

### Seat: B5
Total Cost: 200 INR Thank you for using the booking system
