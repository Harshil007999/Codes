#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    stack<string> parking;  
    queue<string> temp;     
    int capacity = 5;       
    int choice;
    
    cout << "\n===== PARKING LOT MANAGEMENT =====\n";
    cout << "Parking Capacity: " << capacity << " cars\n\n";
    
    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Park a Car\n";
        cout << "2. Remove a Car\n";
        cout << "3. View Parking Status\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        if (choice == 1) {
            if (parking.size() >= capacity) {
                cout << "\nParking lot is FULL!\n";
            } else {
                string carNumber;
                cout << "Enter car number: ";
                cin >> carNumber;
                
                parking.push(carNumber);  // Push
                cout << "Car " << carNumber << " parked successfully!\n";
                cout << "Cars in lot: " << parking.size() << "/" << capacity << "\n";
            }
        }
        
        else if (choice == 2) {
            if (parking.empty()) {
                cout << "\nParking lot is EMPTY!\n";
            } else {
                string carNumber;
                cout << "Enter car number to remove: ";
                cin >> carNumber;
                
                bool found = false;
                int moveCount = 0;
                
                while (!parking.empty()) {
                    string currentCar = parking.top();  
                    parking.pop();                       
                    
                    if (currentCar == carNumber) {
                        cout << "\nCar " << carNumber << " removed successfully!\n";
                        cout << "Cars moved temporarily: " << moveCount << "\n";
                        found = true;
                        break;
                    } else {
                        temp.push(currentCar); 
                        moveCount++;
                        cout << "Moving car " << currentCar << " temporarily...\n";
                    }
                }
                
                while (!temp.empty()) {
                    string car = temp.front(); 
                    temp.pop();                 
                    parking.push(car);         
                    cout << "Returning car " << car << " to parking...\n";
                }
                
                if (!found) {
                    cout << "\nCar " << carNumber << " not found!\n";
                }
            }
        }
        
        else if (choice == 3) {
            if (parking.empty()) {
                cout << "\nParking lot is EMPTY!\n";
            } else {
                cout << "\n----- PARKING STATUS -----\n";
                cout << "Total cars parked: " << parking.size() << "/" << capacity << "\n";
                cout << "\nCars (top to bottom):\n";
                
                stack<string> tempStack;
                int position = 1;
                

                while (!parking.empty()) {
                    string car = parking.top();
                    parking.pop();
                    tempStack.push(car);
                    cout << position << ". " << car << "\n";
                    position++;
                }
                
                while (!tempStack.empty()) {
                    parking.push(tempStack.top());
                    tempStack.pop();
                }
            }
        }
        
        else if (choice == 4) {
            cout << "\nThank you for using Parking Management!\n";
        }
        
        else {
            cout << "\nInvalid choice! Try again.\n";
        }
        
    } while (choice != 4);
    
    return 0;
}